#include <stdio.h>

int main() {
    int systolic, diastolic;
    float pulse_pressure, mean_arterial_pressure;

    // Request user input for their Systolic and Diastolic Pressure
    printf("---------------------------------------------\n");
    printf(" Hasan's Blood Pressure Measurement Program: \n");
    printf("---------------------------------------------\n\n");
    printf("Insert Your Systolic Pressure (SP) in mmHg  : ");
    scanf("%d", &systolic);
    printf("Insert Your Diastolic Pressure (DP) in mmHg : ");
    scanf("%d", &diastolic);

    // Calculate The Pulse Pressure (PP)
    pulse_pressure = systolic - diastolic;

    // Calculate The Mean Arterial Pressure (MAP)
    mean_arterial_pressure = diastolic + (float)(1.0/3.0) * pulse_pressure;

    /** Check for invalid blood pressure reading
    if (systolic <= 0 || diastolic <= 0 || systolic < diastolic) {
        printf("Invalid Blood Pressure Reading\n");
        return 0;
    }  */ //

    // Determine blood pressure category with 2 decimal points
    printf("\n\n--------------------------------------------\n");
    printf("       Blood Pressure Analysis Result:       \n");
    printf("--------------------------------------------\n\n");
    printf("Blood Pressure (BP)                         : %d/%d mmHg\n", systolic, diastolic);
    printf("Pulse Pressure (PP)                         : %.f mmHg\n", pulse_pressure);
    printf("Mean Arterial Pressure (MAP)                : %.2f mmHg\n", mean_arterial_pressure);
    printf("Blood Pressure Category                     : ");

    if (systolic < 90 || diastolic < 60) {
        printf("Hypotension\n");
    } else if (systolic > 180 || diastolic > 120) {
        printf("Hypertensive Crisis\n");
    } else if (systolic >= 140 || diastolic >= 90) {
        printf("High Blood Pressure (Hypertension) Stage 2\n");
    } else if (systolic >= 130 || diastolic >= 80) {
        printf("High Blood Pressure (Hypertension) Stage 1\n");
    } else if (systolic >= 120 || diastolic <= 80) {
        printf("Elevated\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}
