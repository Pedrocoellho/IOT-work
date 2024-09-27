# Sistema de Monitoramento de Portas com Alerta

**Disciplina**: Internet das Coisas (IoT)  
**Equipe**: Larissa, Lívia, Pedro, Victor  
**Professores**: Dr. Ítalo Linhares, Dr. Israel Barros  

## Índice
- [Proposta](#proposta)
- [Objetivos](#objetivos)
  - [Objetivo Geral](#objetivo-geral)
  - [Objetivos Específicos](#objetivos-específicos)
- [Arquitetura do Sistema](#arquitetura-do-sistema)
- [Vantagens e Melhorias](#vantagens-e-melhorias)
- [Código](#código)
- [Simulação](#simulação)

## Proposta
Desenvolver um sistema de monitoramento de portas/janelas utilizando sensores de movimento para detectar aberturas não autorizadas e enviar alertas de forma eficiente, aplicável em residências e escritórios para prevenir invasões.

## Objetivos

### Objetivo Geral
Criar um sistema IoT capaz de monitorar portas e janelas e enviar alertas em caso de movimentações não autorizadas.

### Objetivos Específicos
- Implementar um sensor de movimento (PIR) para detectar abertura de portas/janelas.
- Acionar um LED como indicador visual de alerta.
- Simular o envio de eventos para uma plataforma IoT (TagoIO).

## Arquitetura do Sistema
- **Sensor PIR**: Detecta movimento.
- **LED**: Indicador visual de alerta.
- **Microcontrolador** (ESP32 ou Arduino): Controla o sistema e processa os eventos.
- **Plataforma IoT (TagoIO)**: Registra os eventos e envia alertas em tempo real.

## Vantagens e Melhorias
**Vantagens**:
- Baixo custo e fácil implementação.
- Expansível para outros tipos de sensores.

**Possíveis Melhorias**:
- Adicionar comunicação real com a TagoIO.
- Notificações via SMS ou aplicativo.

## Código
O arquivo `sketch` contém o código do sistema.

## Simulação
A simulação do projeto foi realizada na plataforma Wokwi:  
[Wokwi Simulation](https://wokwi.com/projects/409951533607740417)
