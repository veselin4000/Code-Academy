#include <stdio.h>

int main(){
double tomato = 4.5;
double flour = 1.80;
double yoghurt = 0.50;
double icecreamCone = 0.60;
double candy = 1.50;
double lollipop = 0.15;
double tomatoWeight = 0;
float flourWeight;
float yoghurtWeight;
float coneWeight;
float candyWeight;
float lollipopWeight;
//float weight;
printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати,брашно, кисело мляко, сладолед на фунийки и близалки.\n");
printf("Колко килограма домати ще желаете? ");
scanf("%f",&tomatoWeight);
float TomatoTotal = tomatoWeight*tomato;

printf("Колко килограма домати ще желаете? ");
scanf("%f",&flourWeight);
float flourTotal = flourWeight*flour;

printf("Колко килограма домати ще желаете? ");
scanf("%f",&yoghurtWeight);
float yoghurtTotal = yoghurtWeight*yoghurt;

printf("Колко килограма домати ще желаете? ");
scanf("%f",&coneWeight);
float icecreamConeTotal = coneWeight*icecreamCone;

printf("Колко килограма домати ще желаете? ");
scanf("%f",&candyWeight);
float candyTotal = candyWeight*candy;

printf("Колко килограма домати ще желаете? ");
scanf("%f",&lollipopWeight);

float lollipopTotal = lollipopWeight*lollipop;

float alltotal = TomatoTotal + flourTotal +yoghurtTotal+icecreamConeTotal+candyTotal;
printf("%.2f",alltotal);
}