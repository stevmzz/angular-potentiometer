// === Librerias ===
#include <math.h> // Libreria Matematica

// === Constantes ===
const int   PIN_ADC   = A0;		// Pin analogico donde llega V_iso
const int   ADC_MAX   = 1023;	// Resolucion del ADC: 10 bits (0 a 1023)
const float THETA_MAX = 300.0; 	// Recorrido maximo del potenciómetro en grados

// === Variables ===
int   valorADC = 0;		// Valor crudo leído del ADC (0 a 1023)
float voltaje  = 0.0; 	// Tension V_iso calculada en voltios
float anguloDeg = 0.0; 	// Angulo calculado en grados
float anguloRad = 0.0; 	// Angulo calculado en radianes

// =================

void setup() {
  Serial.begin(9600); // Iniciar comunicacion serial a 9600
}

// =================

void loop() {

  // 1. Leer valor ADC (0 a 1023)
  valorADC = analogRead(PIN_ADC);

  // 2. Calcular V_iso
  voltaje = (valorADC / (float)ADC_MAX) * 5.0;

  // 3. Convertir a grados
  anguloDeg = (valorADC / (float)ADC_MAX) * THETA_MAX;

  // 4. Convertir grados a radianes
  anguloRad = anguloDeg * (M_PI / 180.0);

  // 5. Imprimir resultados
  Serial.print("ADC: ");
  Serial.print(valorADC);
  Serial.print(" | V_iso: ");
  Serial.print(voltaje, 3);
  Serial.print(" V | Grados: ");
  Serial.print(anguloDeg, 2);
  Serial.print(" deg | Radianes: ");
  Serial.print(anguloRad, 4);
  Serial.println(" rad");

  delay(300);
}

// =================