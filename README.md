<h1 align="center">
   CheckPoint 1 - Edge Computing e Edge Systems
</h1>

### Sobre

O objetivo do CheckPoint é atender a demanda da **Vinharia Agnello**, onde era necessário a criação de um sistema de monitoramento de luminosidade controlado por Arduino que permite verificar se o nível de luminosidade é adequada para a conservação do vinho.   

<hr>

### Tecnologias utilizadas

O projeto foi desenvolvido utilizando as seguintes tecnologias

Hardware

- Arduino 
- 1 Placa de ensaio
- 5 Resistores
- 3 LEDs (Verde, Amarelo e Vermelho)
- 1 Fotorresitor 
- 1 Buzzer
- 21 Cabos jumpers macho para macho
- 1 Cabo USB Tipo A para Tipo B
- 1 Tela LCD 

Software

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Tinkercard](https://www.tinkercad.com)

<hr>

### Instalação

1. Baixe e instale o [Arduino IDE](https://www.arduino.cc/en/software).
2. Copie o código do projeto no [Tinkercard](https://www.tinkercad.com/things/34svMQR4K5T-checkpoint-edge-?sharecode=0xWWGmACIG5ZywkPIGMjdAKyNercjdW2pWyLtDT6DeE).
3. Cole o código na IDE do Arduino.
4. Verifique se as bibliotecas necessárias estão instaladas.
5. Conecte seu Arduino ao computador.
6. Selecione a placa correta em Ferramentas > Placa (por exemplo, Arduino Uno).
7. Selecione a porta correta em Ferramentas > Porta.
8. Carregue o código no Arduino clicando no botão **"Upload"**.

<hr>

### Utilização 

1. Coloque o sistema de luminosidade em um ambiente que deseja monitorar.
2. Conecte o sistema ao fornecimento de energia via USB.
3. A tela LCD se acenderá com a porcentagem de luminosidade.
4. Se o ambiente está com a luminosidade **adequada**, o **LED Verde** acenderá.
5. Se o ambiente está com a luminosidade **estável**, o **LED Amarelo** acenderá junto ao **Buzzer** emitindo buzinas com o som agradável.
6. Se o ambiente está com a luminosidade **inadequada**, o **LED Vermelho** acenderá junto ao **Buzzer** emitindo um som com o volume mais elevado. 

<hr>

