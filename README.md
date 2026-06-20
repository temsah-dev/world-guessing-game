# 🎮 Golden Wings — Word Guessing Game

> A terminal-based word guessing game built entirely in C++ with a progression system, shop, and secret easter eggs.

---

## 📖 About The Project

**Golden Wings** is a console-based word guessing game similar to Hangman, developed as a first-semester university project. The player guesses words letter by letter across 5 themed levels, with a points system, purchasable levels, and even a Devil's gamble room.

---

## 🕹️ Gameplay

- Guess the hidden word **letter by letter**
- You have **5 lives** per round
- Use **"help"** for a hint (costs 2 points)
- Earn points by winning — lose none by failing
- Unlock premium levels through the **Shop**

---

## 🗺️ Levels

| # | Level | Theme | Status |
|---|-------|-------|--------|
| 1 | 🍎 Fruit Level | Common fruits | Free |
| 2 | 🌍 Country Level | Countries of the world | Free |
| 3 | ⚽ Football Players | Famous football players | Free |
| 4 | 🍕 Famous Foods | World-famous foods | 🔒 20 pts |
| 5 | 🏛️ Sphinx Level | Riddles & abstract words | 🔒 30 pts |

---

## ✨ Features

- 🏪 **Shop System** — Buy locked levels using your earned points
- 👹 **Devil Room** — A coin-flip gamble: win 5 lives or lose 4 points
- 💡 **Hint System** — Request a hint at the cost of 2 points
- 🏆 **Score Tracker** — Points persist throughout the entire session
- 🔐 **Secret Easter Egg** — Try typing `Temsa7` in the main menu 👀

---

## 🛠️ Built With

| Technology | Purpose |
|-----------|---------|
| `C++` | Core language |
| `<iostream>` | Console input/output |
| `<string>` | String manipulation |
| `<ctime>` + `<random>` | Random word selection |
| `<cctype>` + `<algorithm>` | Letter case handling |

> No external libraries — pure Standard Library C++.

---

## 🚀 Getting Started

### Prerequisites

Make sure you have a C++ compiler installed:

```bash
# Check if g++ is installed
g++ --version
```

### Installation & Run

```bash
# 1. Clone the repository
git clone https://github.com/YOUR_USERNAME/golden-wings-game.git

# 2. Navigate to the project folder
cd golden-wings-game

# 3. Compile
g++ -o golden_wings Golden_Wings_Team.cpp

# 4. Run
./golden_wings
```

> **Windows users:** replace `./golden_wings` with `golden_wings.exe`

---

## 📸 Screenshots

```
         Welcome to Guessing Game
              Start -[1]
               Shop-[2]
          Choose the stage-[3]
```

---

## 🗂️ Project Structure

```
golden-wings-game/
│
├── Golden_Wings_Team.cpp    # Main source file
└── README.md                # Project documentation
```

---

## 🧠 What I Learned

- Structuring a C++ project using functions and forward declarations
- Handling user input and game state with global variables
- Implementing game loops with `while` and recursive function calls
- String manipulation and character comparison in C++
- Building a basic economy/shop system in a console game

---

## 🤝 Contributing

This was a solo university project, but feel free to fork it and add your own levels or features!

1. Fork the project
2. Create your branch (`git checkout -b feature/new-level`)
3. Commit your changes (`git commit -m 'Add new level'`)
4. Push to the branch (`git push origin feature/new-level`)
5. Open a Pull Request

---

## 📄 License

Distributed under the MIT License. See `LICENSE` for more information.

---

## 👤 Author

**Your Name**
- GitHub: [@YOUR_USERNAME](https://github.com/YOUR_USERNAME)

---

<p align="center">Made with ❤️ during my first semester at university</p>
