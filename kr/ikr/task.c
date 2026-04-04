#include <stdio.h>

#define NAME_LEN 100

struct Person { char name[NAME_LEN]; int age; float height; int birth_year; };
struct PersonArray {struct Person data[100]; int count; };

int string_len(const char *s) {
    int l = 0;
    while (s[l]) l++;
    return l;
}

int string_cmp(const char *a, const char *b) {
    int i = 0;
    while (a[i] && b[i] && a[i] == b[i]) i++;
    return a[i] - b[i];
}

char *string_str(const char *haystack, const char *needle) {
    for (int i = 0; haystack[i]; i++) {
        int j = 0;
        while (needle[j] && haystack[i+j] && haystack[i+j] == needle[j]) j++;
        if (needle[j] == '\0') return (char*)&haystack[i];
    }
    return NULL;
}

int is_valid_name(const char *s) {
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' '))
            return 0;
    }
    return 1;
}

void clear_input() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void safe_input(char *buf, int size) {
    fgets(buf, size, stdin);
    int l = string_len(buf);
    if (l > 0 && buf[l-1] == '\n')
        buf[l-1] = '\0';
    else
        clear_input();
}

int calculate_age(int birth_year) {
    return 2026 - birth_year;
}

void init_array(struct PersonArray *arr) {
    arr->count = 0;
}

void add_person(struct PersonArray *arr) { //первая - добавить чела
    struct Person p;
    int valid;

    do {
        printf("Enter name: ");
        safe_input(p.name, NAME_LEN);
        valid = is_valid_name(p.name) && string_len(p.name) > 0;
        if (!valid) printf("Error\n");
    } while (!valid);

    do {
        printf("Enter age: ");
        valid = scanf("%d", &p.age) == 1 && p.age > 0;
        if (!valid) printf("Error\n");
        clear_input();
    } while (!valid);

    do {
        printf("Enter height: ");
        valid = scanf("%f", &p.height) == 1 && p.height > 0;
        if (!valid) printf("Error\n");
        clear_input();
    } while (!valid);

    do {
        printf("Enter birth year: ");
        valid = scanf("%d", &p.birth_year) == 1 && p.birth_year >= 1900 && p.birth_year <= 2026;
        if (!valid) printf("Error\n");
        clear_input();
    } while (!valid);

    if (arr->count < 100) {
        arr->data[arr->count++] = p;
        printf("added\n");
    } else {
        printf("Masive is full\n");
    }
}

void print_all(struct PersonArray *arr) { //вторая - вывести всех
    if (arr->count == 0) {
        printf("Error\n");
        return;
    }
    for (int i = 0; i < arr->count; i++) {
        struct Person *p = &arr->data[i];
        printf("%s | Age: %d | Height: %.2f | Birth year: %d\n",
               p->name, p->age, p->height, p->birth_year);
    }
}

void sort_by_name(struct PersonArray *arr) { //третья отсортировать по именам
    for (int i = 0; i < arr->count - 1; i++) {
        for (int j = i + 1; j < arr->count; j++) {
            if (string_cmp(arr->data[i].name, arr->data[j].name) > 0) {
                struct Person tmp = arr->data[i];
                arr->data[i] = arr->data[j];
                arr->data[j] = tmp;
            }
        }
    }
}

void sort_by_age(struct PersonArray *arr) { //четвертая отсортировать по возрасту
    for (int i = 0; i < arr->count - 1; i++) {
        for (int j = i + 1; j < arr->count; j++) {
            if (arr->data[i].age > arr->data[j].age) {
                struct Person tmp = arr->data[i];
                arr->data[i] = arr->data[j];
                arr->data[j] = tmp;
            }                                                          //krasota
        }
    }
}

void statistics(struct PersonArray *arr) { //пятая - статистика
    if (arr->count == 0) {
        printf("Error\n");
        return;
    }
    int total_age = 0;
    float max_height = arr->data[0].height;
    for (int i = 0; i < arr->count; i++) {
        total_age += arr->data[i].age;
        if (arr->data[i].height > max_height){
            max_height = arr->data[i].height;
        }     
    }
    printf("Average age: %.2f\n", (float)total_age / arr->count);
    printf("Max height: %.2f\n", max_height);
}

void search_by_name(struct PersonArray *arr) { //шестая - найти по имени
    char search[NAME_LEN];
    printf("Enter name: ");
    safe_input(search, NAME_LEN);
    int found = 0;
    for (int i = 0; i < arr->count; i++) {
        if (string_str(arr->data[i].name, search) != NULL) {
            struct Person *p = &arr->data[i];
            printf("Found: %s; Age: %d; Height: %.2f; Birth year: %d\n",
                   p->name, p->age, p->height, p->birth_year);
            found = 1;
        }
    }
    if (!found) printf("Error\n");
}

void search_by_age_range(struct PersonArray *arr) { //седьмая - найти по возрасту, в радиусе
    int min_a, max_a;
    printf("Enter min age: ");
    scanf("%d", &min_a);
    printf("Enter max age: ");
    scanf("%d", &max_a);
    clear_input();
    int found = 0;
    for (int i = 0; i < arr->count; i++) {
        if (arr->data[i].age >= min_a && arr->data[i].age <= max_a) {
            struct Person *p = &arr->data[i];
            printf("%s; Age: %d; Height: %.2f; Birth year: %d\n",
                   p->name, p->age, p->height, p->birth_year);
            found = 1;
        }
    }
    if (!found) printf("No results\n");
}

void save_to_binary(struct PersonArray *arr) { //сохранить
    char filename[256];
    printf("Enter filename: ");
    safe_input(filename, 256);
    FILE *f = fopen(filename, "wb");
    if (!f) {
        printf("Error\n");
        return;
    }
    fwrite(&arr->count, sizeof(int), 1, f);
    fwrite(arr->data, sizeof(struct Person), arr->count, f);
    fclose(f);
    printf("Saved %d obj\n", arr->count);
}

void load_from_binary(struct PersonArray *arr) { //загрузить
    char filename[256];
    printf("Enter filename: ");
    safe_input(filename, 256);
    FILE *f = fopen(filename, "rb");
    if (!f) {
        printf("Error\n");
        return;
    }
    int new_count;
    if (fread(&new_count, sizeof(int), 1, f) != 1) {
        printf("Error\n");
        fclose(f);
        return;
    }
    if (new_count > 100) new_count = 100;
    arr->count = new_count;
    fread(arr->data, sizeof(struct Person), new_count, f);
    fclose(f);
    printf("Loaded %d obj\n", arr->count);
}

int main() {
    struct PersonArray arr;
    arr.count = 0;

    void (*menu[])(struct PersonArray*) = {add_person, print_all, sort_by_name, sort_by_age, statistics, search_by_name, search_by_age_range, save_to_binary, load_from_binary};
    int choice;
    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Add person\n");
        printf("2. Print all\n");
        printf("3. Sort by name\n");
        printf("4. Sort by age\n");
        printf("5. Statistics\n");
        printf("6. Search by name\n");
        printf("7. Search by age range\n");
        printf("8. Save\n");
        printf("9. Load\n");
        printf("10.Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1) {
            clear_input();
            printf("Error\n");
            continue;
        }
        clear_input();

        if (choice == 10) {
            printf("Exitting.........................................................................\n");
            break;
        }

        if (choice >= 1 && choice <= 9) {
            menu[choice-1](&arr);
        } else {
            printf("Error\n");
        }
    }
    return 0;
}