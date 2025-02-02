# Controle de LEDs com Interrupções no Raspberry Pi Pico

Este projeto implementa um sistema interativo utilizando o microcontrolador **Raspberry Pi Pico W**, baseado no uso de **interrupções (IRQ)** para controle de uma **matriz de LEDs WS2812 (5x5)** e um **LED RGB**.

## Funcionalidade

- O **LED vermelho (RGB)** pisca **5 vezes por segundo**.
- O **Botão A (GPIO 5)** incrementa o número exibido na matriz de LEDs.
- O **Botão B (GPIO 6)** decrementa o número exibido na matriz de LEDs.
- A matriz de LEDs exibe números de **0 a 9**, em um formato fixo semelhante a caracteres digitais.
- Implementação de **debouncing via software** para evitar leituras erradas dos botões.

## Requisitos

- **Microcontrolador:** Raspberry Pi Pico W
- **LEDs:** Matriz 5x5 WS2812, LED RGB
- **Resistores:** 3x de 330 Ω
- **Botões:** 2 push-buttons
- **Ferramentas:**
  - SDK do Raspberry Pi Pico
  - Simulador **Wokwi** (opcional)
  - Editor de código **VS Code**
  - CMake e Ninja para compilação

## Configuração dos Pinos

| Componente | GPIO |
|------------|------|
| Matriz WS2812 | GPIO 7 |
| LED RGB Vermelho | GPIO 13 |
| Botão A (Incrementa Número) | GPIO 5 |
| Botão B (Decrementa Número) | GPIO 6 |

## Como Executar

1. **Clone o Repositório:**
   ```bash
   git clone https://github.com/Anamacario/Led-Matrix-Interruptions.git
   cd Led-Matrix-Interruptions
   ```

2. **Carregue no Raspberry Pi Pico:**
   - Conecte a placa ao computador em modo **BOOTSEL** e copie o arquivo `.uf2` gerado para a unidade do Pico.

3. **Teste no Wokwi:**
   - Abra o arquivo `diagram.json` no **Wokwi** e clique em "Play" para testar a simulação.

## Implementação Técnica

- **Uso de Interrupções:** Os botões são configurados para acionar **interrupções (IRQ)** na borda de descida.
- **Debouncing via Software:** Há um controle para evitar leituras erradas de múltiplos cliques involuntários.
- **Controle da Matriz WS2812:** A exibição dos números de **0 a 9** é feita ativando segmentos específicos dos LEDs.
- **Piscar do LED RGB:** Um temporizador periódico aciona o **piscar contínuo do LED vermelho a 5 Hz**.

## Testes Realizados

- **Teste de troca de números na matriz via botões.**
- **Verificação do debounce dos botões.**
- **Execução no simulador Wokwi e hardware real.**

## Entrega e Demonstração

1. **Código-fonte**: Disponível no repositório GitHub com documentação e organização.
2. **Vídeo Demonstrativo**:
   - Demonstração em execução na placa **BitDogLab**.
   Click [AQUI](https://drive.google.com/file/d/1fU0dZwQcaFhBf-Q7Ubn6J-NrhgAR87xq/view?usp=sharing) para acessar o link de apresentação.

## Correção de Erro ao Compilar em Nova Máquina

Ao clonar o repositório e compilar o código em uma nova máquina, pode ocorrer um erro relacionado à biblioteca **ws2812**.

## ✅ Passos para Corrigir:

1. Compile o código normalmente, mesmo que o erro apareça.  
2. Após compilar, na pasta build abra o arquivo `ws2812.pio.h`.  
3. Localize a linha 49, onde estará o seguinte trecho:  
   ```c
   pio_sm_config c = pio_ws2812_program_get_default_config(offset);
- Remova o prefixo _pio, deixando assim:
    ```c
    pio_sm_config c = ws2812_program_get_default_config(offset);
- Compile novamente. O código funcionará normalmente.
⚠️ Observação:
Essa correção é necessária devido a diferenças na forma como o arquivo é gerado durante o processo de build em diferentes ambientes.

## Autoria
**Desenvolvido por:** Ana Carla Macário

**Professor:** Wilton Lacerta

**Data de Entrega:** 27/01/2025

