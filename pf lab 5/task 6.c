#include<stdio.h>

int main()
 {
    int problemChoice, algoChoice;

  
    printf("--- AI Model Selection System ---\n");
    printf("Select the Type of Problem:\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &problemChoice);

    printf("\n");

    switch (problemChoice) {
        
        // 1. Classification Branch
        case 1:
            printf("--- Classification Algorithms ---\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN (K-Nearest Neighbors)\n");
            printf("Enter algorithm choice (1-3): ");
            scanf("%d", &algoChoice);
            
          //Algo Classification
            switch (algoChoice) {
                case 1: printf("\nSelected: Logistic Regression\n"); break;
                case 2: printf("\nSelected: Decision Tree\n"); break;
                case 3: printf("\nSelected: KNN\n"); break;
                default: printf("\nInvalid algorithm selection!\n"); break;
            }
            break;

        // 2. Regression Branch
        case 2:
            printf("--- Regression Algorithms ---\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR (Support Vector Regression)\n");
            printf("Enter algorithm choice (1-3): ");
            scanf("%d", &algoChoice);
            
            // Algo Regression
            switch (algoChoice) {
                case 1: printf("\nSelected: Linear Regression\n"); break;
                case 2: printf("\nSelected: Polynomial Regression\n"); break;
                case 3: printf("\nSelected: SVR\n"); break;
                default: printf("\nInvalid algorithm selection!\n"); break;
            }
            break;

        // 3. Clustering Branch
        case 3:
            printf("--- Clustering Algorithms ---\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            printf("Enter algorithm choice (1-3): ");
            scanf("%d", &algoChoice);
            
            //algo for Clustering
            switch (algoChoice) {
                case 1: printf("\nSelected: K-Means\n"); break;
                case 2: printf("\nSelected: Hierarchical Clustering\n"); break;
                case 3: printf("\nSelected: DBSCAN\n"); break;
                default: printf("\nInvalid algorithm selection!\n"); break;
            }
            break;

        // 4. Computer Vision Branch
        case 4:
            printf("--- Computer Vision Algorithms ---\n");
            printf("1. CNN (Convolutional Neural Network)\n");
            printf("2. YOLO (You Only Look Once)\n");
            printf("3. R-CNN\n");
            printf("Enter algorithm choice (1-3): ");
            scanf("%d", &algoChoice);
            
            // Inner switch for Computer Vision
            switch (algoChoice) {
                case 1: printf("\nSelected: CNN\n"); break;
                case 2: printf("\nSelected: YOLO\n"); break;
                case 3: printf("\nSelected: R-CNN\n"); break;
                default: printf("\nInvalid algorithm selection!\n"); break;
            }
            break;

        
        default:
            printf("Invalid problem type selection!\n");
            break;
    }

    return 0;
}
