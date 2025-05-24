#include <bits/stdc++.h>
using namespace std;

int main(){

    int HP_you = 250;
    int HP_slime = 200;
    int AT_you = 20;
    int ATC_you = 50;
    int AT_slime = 20;
    int ATC_slime = 50;
    int Heal = 3;
    int Mercy = 0;
    int Patada = 0;
    string name;
    bool flag = false;
    bool Defeat = false;
    bool Block = false;
    cout << "Bienvenido!\nInserte su nombre: ";
    cin >> name;
    cout << "Hola! " << name << ", preparado para luchar?\n\nSlime ha aparecido!\n\n";
    if (name == "Slime" || name == "SLIME"){
        cout << "(Mira tu gemelo malvado)" << endl << endl;
    }

    do{
        // system("cls");
        srand(time(NULL));
        int random1 = rand() % 2 + 1;
        int random2 = rand() % 6;
        int CriticalDamageYou = rand() % 4 + 1;
        int CriticalDamageSlime = rand() % 4 + 1;
        int opcion, opcion2, opcion3;
        cout << "HP actual: " << HP_you << endl;
        cout << "Seleccione su opcion\n1. Atacar.\n2. Accion\n3. curarme.\n4. escapar\n";
        cin >> opcion; cout << endl;

        switch (opcion){
        case 1:
            cout << name << " Ataca a Slime" << endl;
            if (CriticalDamageYou <= 2){
                cout << "Has hecho: " << AT_you << " de dano al slime\n";
                HP_slime -= AT_you;
                cout << "HP del slime es de: " << HP_slime << endl << endl;
            } else if (CriticalDamageYou == 3){
                cout << "Has hecho: " << ATC_you << " de dano CRITICO al slime\n";
                HP_slime -= ATC_you;
                cout << "HP del slime es de: " << HP_slime << endl << endl;
            } else if (CriticalDamageYou >= 4){
                cout << "Fallaste tu Ataque" << endl << endl;
            }
            if (CriticalDamageSlime <= 2){
                cout << "El slime ataca a: " << name << endl;
                HP_you -= AT_slime;
                cout << "Tu HP actual es: " << HP_you << endl << endl;
            } else if (CriticalDamageSlime == 3){
                cout << "El slime ataca a: " << name << endl << endl;
                HP_you -= ATC_slime;
                cout << "Dano CRITICO, Tu HP actual es: " << HP_you << endl << endl;
            }else if (CriticalDamageSlime >= 4){
                cout << "Slime fallo su tu ataque" << endl << endl;
            }
            break;
        case 2:
            cout << "Elije tu accion:\n1. Stats\n2. Burlarte\n3. Contarle un chiste\n";
            cout << "4. Patada\n5. Abrazar Slime.\n6. Perdonar\n7. Nada\n\n";
            cin >> opcion2; cout << endl;
                switch (opcion2)
                {
                case 1:
                    cout << name << "\nVida: " << HP_you << endl;
                    cout << "Ataque: " << AT_you << endl << endl;

                    cout << "SLIME nvl.1\nVida: " << HP_slime << endl;
                    cout << "Ataque: " << AT_slime << endl << endl;
                    break;
                case 2:
                    cout << name << " se burla del slime...\nNo parece entenderte\n";
                if (CriticalDamageSlime <= 3){
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= AT_slime;
                    cout << "Tu HP actual es: " << HP_you << endl << endl;
                } else {
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= ATC_slime;
                    cout << "Dano CRITICO, Tu HP actual es: " << HP_you << endl << endl;
                }
                    break;
                case 3:
                    cout << "Le cuentas un chiste buenisimo...\n";
                if (random2 >= 0 && random2 <= 3){
                    cout << "No pasa nada... eres pesimo...\n";
                    if (CriticalDamageSlime <= 3){
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= AT_slime;
                    cout << "Tu HP actual es: " << HP_you << endl << endl;
                } else {
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= ATC_slime;
                    cout << "Dano CRITICO, Tu HP actual es: " << HP_you << endl << endl;
            }
                } else if (random2 >= 4){
                    cout << "Parece reirse...\n\n";
                    Mercy++;
                    cout << "Puntos de piedad: +" << Mercy << endl << endl;
                }
                    break;
                case 4:
                if (Patada == 0){
                    cout << name << " Le tiro una patada al slime...\n";
                    cout << " Este volo hacia otro slime... se fusionan\n";
                    HP_slime *= 2;
                    AT_slime *= 2;
                    ATC_slime += 40;
                    cout << "La vida y ataque del slime aumentaron!!\n";
                    cout << "Es mas grande ahora... esto no se ve bien...\n\n";
                    Patada++;
                } else {
                    cout << "Porque harias eso otra vez??\n\n";
                }
                    break;
                case 5:
                    if (random1 == 1){
                    cout << name << " Abraza al slime... parece contento\n\n"; 
                    Mercy++;
                    cout << "Puntos de piedad: +" << Mercy << endl << endl;
                    break;
                } else if (random1 == 2){
                    cout << name << " Lo abrazo pero se le resbalo...\n\n";
                    if (CriticalDamageSlime <= 3){
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= AT_slime;
                    cout << "Tu HP actual es: " << HP_you << endl << endl;
                } else {
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= ATC_slime;
                    cout << "Dano CRITICO, Tu HP actual es: " << HP_you << endl << endl;
            }
                }
                    break;
                case 6:
                    if (Mercy >= 3){
                        cout << "El slime acepta la piedad de " << name << "... El slime se retira" << endl << endl;
                        flag = true;
                    } else {
                        cout << "El slime no acepto el perdon de: " << name << endl;
                        cout << "(Punto de piedad minimos: 3)" << endl << endl;
                        if (CriticalDamageSlime <= 3){
                    cout << "El slime ataca a: " << name << endl;
                    HP_you -= AT_slime;
                    cout << "Tu HP actual es: " << HP_you << endl << endl;
                    } else {
                    cout << "El slime ataca a: " << name << endl << endl;
                    HP_you -= ATC_slime;
                    cout << "Dano CRITICO, Tu HP actual es: " << HP_you << endl << endl;
                }
                    }
                    break;
                case 7:
                    break;
                default: 
                    cout << "Opcion no valida\n";
                    break;
                }
            break;
        case 3:
            if (Heal == 0){
                cout << "Ya no te quedan pociones de vida\n"; break;
            } else  {
                if (HP_you >= 231){
                cout << "No puedes curarte mas allá de tu vida limite\n";
            } else {
                Heal--;
                cout << "Te has curado! te quedan " << Heal << " Pociones de vida\n";
                HP_you += 30;
                cout << "Tu HP actual es: " << HP_you << endl << endl;
            }
        }
            break;
        case 4:
            cout << "Tienes un 50% de exito de escapar! estas seguro?\n1. Si\n2. No\n";
            cin >> opcion3;
            switch (opcion3)
            {
            case 1:
                if (random1 == 1){
                    cout << "Escapando...\n\n";
                    flag = true;
                    Defeat = true;
                } else if (random1 == 2){
                    if (CriticalDamageSlime <= 3){
                cout << "Escapada fallida, el slime ataca a: " << name << endl << endl;
                HP_you -= AT_slime;
                cout << "Tu HP actual es: " << HP_you << endl << endl;
            } else {
                cout << "Escapada Fallida, el slime ataca a: " << name << endl << endl;
                HP_you -= ATC_slime;
                cout << "Dano CRITICO, Tu HP actual es: " << HP_you << endl << endl;
            }
                }
                break;
            case 2:
                cout << "Decidiste no escapar... \n\n";
                break;
            default:
                cout << "Opcion invalida\n\n";
                break;
            }
            break;
        default:
            cout << "Opcion invalida\n\n";
            break;
        }
        if (HP_you <= 0){
            cout << "Moriste.. GAME OVER?\n\n";
            flag = true;
            Defeat = true;
        }
        if (HP_slime <= 0){
            cout << "GANASTE. Subiste al Nvl 2\n";
            cout << "HP +100\n";
            HP_you += 100;
            cout << "Desbloqueaste: Bloqueo (Te permite bloquear el 50% de los ataques)\n\n";
            Block = true;
            flag = true;
        }
    } while (!flag);

    if (Defeat == false){
        if (name == "Slime" || name == "SLIME"){
            cout << "Bien hecho " << name << ", Derrotaste... a tu hermano??..." << endl << endl;
        } else {
            cout << "Bien hecho " << name << ", Derrotaste... a ese slime\n";
        }
    } else {
        cout << "Ok " << name << ", no tengo palabras de como te derroto un slime..." << endl;
            if (HP_you <= 50){
                cout << "Pero te salve... dejame curarte, me sorprende lo dañado que te dejo " << endl;
            HP_you += 200;
            cout << "Tu HP es ahora de: " << HP_you << endl << endl;
        }
    }
    int op;
    cout << "Es curioso que te acompañe en tu aventura, sabes quien soy?\n1. Si\n2. No\n";
    cin >> op; cout << endl;
    switch (op){
    case 1:
        cout << name << " agradezco el gesto, pero en fin\n";
        break;
    case 2:
        cout << "... bueno da igual, sigamos\n";
        break;
    default:
        cout << "Eso no responde mi pregunta pero en fin...\n";
        break;
    }
    cout << "Vamos a una tienda\n\n";

    int Money = 1000;
    int TemFlakes = 0;
    int opcion3;
    int Defense = 0;
    int Mana = 0;
    bool Mdeb = false;
    bool Mdam = false;
    do {
        // system("cls");
        cout << "--Bienvenidos a la tienda--\n";
        cout << "Por favor escoja que desea: \n";
        cout << "1. Pociones de vida $200\n2. Super Espada $400\n3. Armadura Divina $600\n4. Magia debilitadora $400\n";
        cout << "5. Magia Dano $800\n6. TEMMIE FLAKES $1000\n7. Casino\n8. Nada mas\n\n";
        cout << "Dinero: " << Money << endl;
        cin >> opcion3; cout << endl << endl;

        switch (opcion3){
        case 1:
            flag = false;
            if (Money >= 200){
                Heal++;
                cout << "Pocion de vida +1\n";
                Money -= 200;
                cout << "Pociones de vida actuales: " << Heal << "\n\n";
            } else {
                cout << "Dinero insuficiente\n";
                cout << "Pociones de vida actuales: " << Heal << "\n\n";
            }
            break;
        case 2:
            flag = false;
            if (Money >= 400){
                cout << "Reemplazaste tu palo comun y corriente por una espada de verdad\n\n";
                AT_you += 75;
                cout << "Ahora tu ataque paso de 20 --> 75\n\n";
                Money -= 400;
            } else {
                cout << "Dinero insuficiente\n\n";
            }
            break;
        case 3:
            flag = false;
            if (Money >= 600){
                cout << "Ahora tienes armadura\n\n";
                Defense += 20;
                cout << "Ahora tu defensa paso de 0 --> 20\n";
                if (Block == true){
                    cout << "Ahora tu bloqueo paso del 50% al 75%\n\n";
                }
                Money -= 600;
            } else {
                cout << "Dinero insuficiente\n\n";
            }
            break;
        case 4:
            if (Mdam == true){
                cout << "No tienes la capacidad de tener mas de 2 tipos de magias\n\n"; break;
            }
            flag = false;
            if (Money >= 400){
                Money -= 400;
                Mdeb = true;
                cout << "Ahora tienes mana, y tienes la capacidad de debilitar a tus enemigos\n\n";
                Mana += 100;
                cout << "Posees: " << Mana << " De mana. (Que 100 es tu limite)\n\n";
            } else {
                cout << "Dinero insuficiente\n\n";
            }
            break;
        case 5:
            if (Mdeb == true){
                cout << "No tienes la capacidad de tener mas de 2 tipos de magias\n\n"; break;
            }
            flag = false;
            if (Money >= 800){
                Money -= 800;
                Mdam = true;
                cout << "Ahora tienes mana, y tienes la capacidad lanzar poderosos hechizos\n\n";
                Mana += 100;
                cout << "Posees: " << Mana << " De mana. (Que 100 es tu limite)\n\n";
            } else {
                cout << "Dinero insuficiente\n\n";
            }
            break;
        case 6:
            flag = false;
            if (Money >= 1000){
                Money -= 1000;
                cout << "SII AhoRa tu TieNe TEm FlAKes\n\n";
                TemFlakes += 1;
            } else {
                cout << "Dinero insuficiente\n\n";
                cout << "Pociones de vida actuales: " << Heal << "\n\n";
            }
            break;
        case 7:
            cout << "Este es el casino, da tu apuesta y ganaras dinero!!\n";
            cout << "(El casino no hace reembolsos ni se hara responsable si terminas en la ruina)\n";
            cout << "Casino cerrado por remodelaciones... apertura pronto\n\n";
            break;
        case 8:
            flag = true;
            cout << "Saliendo...\n\n";
            break;
        default:
            cout << "No, no tenemos más objetos, escoja los del menu\n\n"; 
            break;
        }
    } while (!flag && Money != 0);
        if (Money == 0){
            cout << "Vaya te quedaste sin dinero... (" << name << " Esta saliendo de la tienda)\n\n";
        }

    if (Mdeb == true || Mdam == true){
        cout << "Genial, ahora tienes magia... espero sirva de algo\n";
    } else if (Money < 1000){
        cout << "Que buenas cosas compraste, aunque la magia se veia prometedora\n";
    } else {
        cout << "De paseo fuiste a la tienda?? habian buenos objetos...\n";
    }

    cout << "Bueno... veamos que tal tus stats:\n\n";
    if (Defeat == true){
        cout << name << ": nvl 1\nVida: " << HP_you << endl;
    } else {
        cout << name << ": nvl 2\nVida: " << HP_you << endl;
    }
    cout << "Ataque: " << AT_you << endl;
    cout << "Defensa: " << Defense << endl;
    cout << "Tipo de magia: ";
    if (Mdeb == true){
        cout << "Magia Debilitadora\n";
    } else if (Mdam == true){
        cout << "Magida de Dano\n";
    } else {
        cout << "Ninguna\n";
    }
    if (Mdeb == true || Mdam == true){
        cout << "Mana: " << Mana << endl;
    }
    cout << "Dinero: " << Money << endl;
    cout << "Pociones de vida: " << Heal << endl;

    cout << "Tengo un mal presentimiento si seguimos..." << endl;
    cout << "Las nubes estan oscuras, pero ya estamos avanzamos mucho para rendirnos..." << endl;
    cout << "Descansemos... avisame para continuar" << endl;
    cin >> opcion3;
    return 0;
}

//king demon
//HP: 1000
//AT: 40; ATC: 80;
//1/6 ataques fallara

//ataques Kd
// 1. Ataque normal: 40 5/10 ataques 50%
// 2. Rasguños: 3 numeros aleatorios 1-60 de daño 4/10 40%
// 3. Rayo atomico 100 de daño 1/10 10%

//ataques You
// 1. At normal
// 2. Rayo debilitador = At_DK -= 20 (por 2 turnos) / consume 40 de mana
// 3. Rayo de daño = 150 / consume 80 de mana
// Mana se recargra cada 1 turno / Mana += 10; no puede pasar la capacidad de 100
