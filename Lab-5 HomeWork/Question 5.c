#include <stdio.h>

int main() {
    int hasPrerequisite, isCourseFull;

    printf("Enter hasPrerequisite (1 = yes, 0 = no): ");
    scanf("%d", &hasPrerequisite);

    printf("Enter isCourseFull (1 = full, 0 = not full): ");
    scanf("%d", &isCourseFull);

    if (hasPrerequisite == 1 && isCourseFull == 0) {
        printf("Enrolled successfully\n");
    }
    else if (hasPrerequisite == 0 && isCourseFull == 0) {
        printf("Cannot enroll: prerequisite missing\n");
    }
    else if (hasPrerequisite == 1 && isCourseFull == 1) {
        printf("Cannot enroll: course is full\n");
    }
    else if (hasPrerequisite == 0 && isCourseFull == 1) {
        printf("Cannot enroll: prerequisite missing and course is full\n");
    }

    return 0;
}
