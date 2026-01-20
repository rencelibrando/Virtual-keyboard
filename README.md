
## Description

 virtual keyboard application developed using C++ Windows Forms. It provides an on-screen keyboard interface that allows users to input characters and simulate key presses in other applications. This project is useful for accessibility, touchscreen devices, or situations where a physical keyboard is unavailable or inconvenient.

## Features

*   **On-screen Keyboard:** A graphical representation of a standard keyboard layout.
*   **Key Press Simulation:** Utilizes `SendKeys::Send()` to send keystrokes to the active window.
*   **Caps Lock Management:** Automatically handles `Caps Lock` state, reflecting it on the virtual keyboard and adjusting character input (uppercase/lowercase) accordingly.
*   **Shift Key Functionality:** Supports `Shift` key functionality for uppercase characters and special symbols.
*   **Special Keys:** Includes support for various special keys like `Esc`, `Tab`, `Enter`, `Backspace`, `Function Keys (F1-F12)`, and common arithmetic operators.

## How it Works

The application is built as a C++ Windows Forms application. The `MyForm.h` file defines the user interface, including numerous `Button` controls that represent individual keys on the virtual keyboard.

When a virtual key button is clicked, its corresponding event handler (`buttonX_Click` or `AtoZ`) is triggered. These handlers then use the `System::Windows::Forms::SendKeys::Send()` method to send the appropriate keystroke string to the currently active application.

The `Form1_KeyDown` and `Form1_KeyUp` event handlers are implemented to detect and manage the state of the `Caps Lock` key, ensuring that the visual indicator on the virtual keyboard and the character input logic (e.g., `AtoZ` function for letter keys) are always synchronized. The `AtoZ` function dynamically determines whether to send an uppercase or lowercase letter based on the active state of `Caps Lock` or `Shift` keys.

## Getting Started

### Prerequisites

*   Visual Studio (with C++ Desktop Development workload)
*   .NET Framework (compatible with C++ Windows Forms)

### Building and Running

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/your-username/Virtual-keyboard.git
    cd Virtual-keyboard
    ```
2.  **Open the solution:**
    Open `Mema.sln` in Visual Studio.
3.  **Build the project:**
    Build the solution (`Build > Build Solution` or `Ctrl+Shift+B`).
4.  **Run the application:**
    Run the project (`Debug > Start Debugging` or `F5`).

## Usage

Once the application is running, the virtual keyboard will appear on your screen. You can then:

*   Click on any key to input characters into the active window.
*   Use the `Shift` and `Caps Lock` keys on the virtual keyboard to switch between uppercase/lowercase and access special characters.
*   Utilize special function keys and operators as needed.

## Future Enhancements

*   **Customizable Layouts:** Allow users to customize the keyboard layout and key assignments.
*   **Multi-language Support:** Implement support for different language layouts.
*   **Theming:** Provide options for different visual themes.
*   **Word Prediction/Autocompletion:** Integrate text prediction to enhance typing speed.
*   **Integration with On-Screen Display:** Improve integration with Windows' accessibility features.
