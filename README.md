# Arduino : contrôle d'un servomoteur avec un potentiomètre

Petit projet Arduino qui pilote un servomoteur grâce à un potentiomètre.
La rotation du potentiomètre est convertie en angle (0 à 180°) et envoyée au servo.
L'angle est aussi affiché sur le moniteur série.

## Matériel

- 1 carte Arduino (Uno, Nano…)
- 1 servomoteur (type SG90)
- 1 potentiomètre (10 kΩ)
- Fils de connexion

## Branchements

| Composant      | Broche Arduino |
|----------------|----------------|
| Servo (signal) | D3             |
| Servo (VCC)    | 5V             |
| Servo (GND)    | GND            |
| Potentiomètre (centre) | A5     |
| Potentiomètre (côtés)  | 5V et GND |

> Pour un servo plus gros, utilisez une alimentation externe (en reliant les GND).

## Utilisation

1. Ouvrir `controle_servo_moteur.ino` dans l'IDE Arduino.
2. Téléverser le programme sur la carte.
3. Ouvrir le moniteur série (9600 bauds) et tourner le potentiomètre.

## Fonctionnement

La valeur lue sur A5 (0-1023) est convertie en angle (0-180°) avec `map()`.
Le servo ne bouge que si l'angle change, ce qui limite les tremblements.

## Licence

MIT
