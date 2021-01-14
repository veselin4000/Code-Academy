#include <stdio.h>

int main(){
double tomato = 4.5;
double flour = 1.80;
double yoghurt = 0.50;
double icecreamCone = 0.60;
double candy = 1.50;
double lollipop = 0.15;
float tomatoWeight = 0;
float flourWeight = 0;
float yoghurtWeight=0;
float coneWeight=0;
float candyWeight=0;
float lollipopWeight=0;
//float weight;
printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати,брашно, кисело мляко, сладолед на фунийки и близалки.\n");
printf("Колко килограма домати ще желаете? ");
scanf("%f",&tomatoWeight);
float tomatoTotal = tomatoWeight*tomato;

printf("Колко килограма брашно ще желаете? ");
scanf("%f",&flourWeight);
float flourTotal = flourWeight*flour;

printf("Колко кисели млека ще желаете? ");
scanf("%f",&yoghurtWeight);
float yoghurtTotal = yoghurtWeight*yoghurt;

printf("Колко сладоледа ще желаете? ");
scanf("%f",&coneWeight);
float icecreamConeTotal = coneWeight*icecreamCone;

printf("Колко бонбони ще желаете? ");
scanf("%f",&candyWeight);
float candyTotal = candyWeight*candy;

printf("Колко близалки ще желаете? ");
scanf("%f",&lollipopWeight);

float lollipopTotal = lollipopWeight*lollipop;

float alltotal = tomatoTotal + flourTotal +yoghurtTotal+icecreamConeTotal+candyTotal+lollipopTotal;
printf("%.2f",alltotal );
}