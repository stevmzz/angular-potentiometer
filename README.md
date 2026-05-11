# Angular Potentiometer

Sistema de medición angular utilizando un potenciómetro, etapas de acondicionamiento analógico y procesamiento basado en Arduino.

## Descripción General

Este proyecto fue desarrollado para el curso EL-2113 Circuitos Eléctricos en Corriente Continua del Instituto Tecnológico de Costa Rica.

El sistema permite medir el desplazamiento angular de un potenciómetro mediante la conversión de su salida analógica de voltaje a valores angulares expresados en grados y/o radianes.

La implementación incluye:

- Etapa de medición del potenciómetro
- Etapa de atenuación de voltaje
- Etapa de interfase con amplificador operacional
- Etapa de procesamiento con Arduino
- Visualización mediante pantalla LCD
- Simulación de circuitos en LTSpice
- Simulación completa del sistema en TinkerCAD
- Implementación física en protoboard

---

## Arquitectura del Sistema

```text
Potenciómetro
      ↓
Atenuación de Voltaje
      ↓
Interfase con Op-Amp
      ↓
ADC del Arduino
      ↓
Conversión Angular
      ↓
LCD / Serial Monitor
