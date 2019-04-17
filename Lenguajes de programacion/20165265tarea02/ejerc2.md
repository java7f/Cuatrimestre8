# Representación en XML para la tabla de evaluaciones del curso de Lenguajes de Programación.

## Tags
* \<evaluations>\</evaluations> = Conjunto de evaluaciones.
* \<eval>\</eval> = Evaluación.
* \<week>\</week> = Semana/s de la evaluación.
* \<date>\</date> = Fecha/s de la evaluación.

## Atributos
 * title = Título de la evaluación
 * id = Identificador único de la evaluación.
 * value = Puntaje de la envaluación.

 Decidí colocar la fecha y la semana de una evaluación como un tag debido a que, según lo que se ve en la página, una evaluación puede tener varias fechas y, adicionalmente, puede que hayan fechas en diferentes semanas.

 En cuanto a los atributos, es información que representa una propiedad de una evaluación y solo puede aparecer 1 sola vez dentro de dicha evaluación.

