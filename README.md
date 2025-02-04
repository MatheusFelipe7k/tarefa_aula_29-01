Tarefa 1: Simulação de Semáforo com Raspberry Pi Pico W
Descrição
Este projeto simula o funcionamento de um semáforo utilizando o Raspberry Pi Pico W. O sistema alterna entre os estados vermelho, amarelo e verde em um ciclo contínuo, com um tempo de transição de 3 segundos entre cada mudança de cor.
Funcionalidades
Ciclo do Semáforo:
O LED vermelho acende por 3 segundos.
O LED amarelo acende por 3 segundos.
O LED verde acende por 3 segundos.
O ciclo reinicia automaticamente.
Timer para Troca de Estados:
Utiliza a função add_repeating_timer_ms() para alternar os estados automaticamente a cada 3 segundos.
A lógica é controlada por uma variável estado, que determina qual LED deve estar aceso em cada momento.
Componentes Utilizados
Raspberry Pi Pico W
03 LEDs (vermelho, amarelo e verde)
03 Resistores de 330Ω
GPIOs Utilizados
Componente
GPIO
LED Vermelho
11
LED Amarelo
12
LED Verde
13
Implementação
O código principal configura os LEDs como saída e utiliza um timer para alternar o estado do semáforo automaticamente. O ciclo de troca de LEDs é feito na função repeating_timer_callback().
Simulação
O projeto pode ser simulado no Wokwi utilizando o arquivo diagram.json, que define a conexão dos componentes.
Como Executar
Clone o repositório:
git clone https://github.com/MatheusFelipe7k/tarefa_aula_29-01.git
Acesse o diretório do projeto:
cd tarefa_1_semaforo
Compile e carregue o código no Raspberry Pi Pico W.
Observe o ciclo do semáforo alternando entre as cores vermelho, amarelo e verde.
Autor
Matheus






Tarefa 2: Temporizador de um Disparo (One Shot)
Descrição
Este projeto implementa um sistema de temporização utilizando o Raspberry Pi Pico W. A lógica de funcionamento é baseada no acionamento de LEDs através de um botão (pushbutton), utilizando a função add_alarm_in_ms() do Pico SDK.
Funcionalidades
Acionamento dos LEDs:
Quando o botão é pressionado, todos os três LEDs (azul, vermelho e verde) são ligados.
Após um atraso de 3 segundos, um dos LEDs se apaga.
Após mais 3 segundos, outro LED se apaga.
Após mais 3 segundos, o último LED se apaga.
Restrição de ativação:
O botão só pode ser pressionado novamente após todos os LEDs terem sido desligados.
Durante a execução do temporizador, o botão não inicia um novo ciclo.
Componentes Utilizados
Raspberry Pi Pico W
03 LEDs (azul, vermelho e verde)
03 Resistores de 330Ω
01 Botão (Pushbutton)
GPIOs Utilizados
Componente
GPIO
LED Azul
11
LED Vermelho
12
LED Verde
13
Botão (Pushbutton)
5
Implementação
O código principal utiliza interrupções para detectar o acionamento do botão e chamar a função add_alarm_in_ms() para gerenciar o tempo de acionamento dos LEDs.
Simulação
O projeto pode ser simulado no Wokwi utilizando o arquivo diagram.json, que define a conexão dos componentes.
Como Executar
Clone o repositório
git clone https://github.com/MatheusFelipe7k/tarefa_aula_29-01.git
Acesse o diretório do projeto:
cd tarefa_2_temporizador
Compile e carregue o código no Raspberry Pi Pico W.
Pressione o botão e observe a sequência de acionamento dos LEDs.
Autor
Matheus

