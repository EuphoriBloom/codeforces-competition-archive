# Codeforces Competition Archive

Welcome to my **Codeforces Competition Archive**!  
This repository is a personal collection of my competitive programming submissions on [Codeforces](https://codeforces.com), organized by contest and problem. It's intended to serve as a personal resource, a learning reference, and a record of my progress over time.

Whether you're a fellow programmer looking for solutions, templates, or ideas — or just browsing — feel free to explore!

---

## 📚 Table of Contents

- [Purpose](#-purpose)
- [Repository Structure](#-repository-structure)
- [Getting Started](#-getting-started)
- [My Coding Setup](#-my-coding-setup)
- [Templates](#-templates)
- [Naming Convention](#-naming-convention)
- [How I Use This Repo](#-how-i-use-this-repo)
- [Codeforces Profile](#-codeforces-profile)
- [License](#-license)
- [Contributing](#-contributing)
- [Acknowledgements](#-acknowledgements)

---

## 🎯 Purpose

This repository is built for three main reasons:

1. **Tracking Progress**: A historical record of my Codeforces contests and how I performed.
2. **Reusability**: Storing useful snippets and templates I use regularly during competitions.
3. **Learning Resource**: Reviewing past problems and my solutions helps reinforce algorithmic concepts and identify areas for improvement.

---

## 🗂 Repository Structure

codeforces-competition-archive/ │ ├── templates/ # Pre-written boilerplate code and snippets ├── contests/ │ ├── 1900/ │ │ ├── A.cpp # Problem A from Contest 1900 │ │ ├── B.cpp # Problem B │ │ └── ... │ ├── 1901/ │ │ └── ... │ └── ... ├── notes/ # Explanations, learning summaries, post-contest analysis ├── tools/ # Scripts or helpers (e.g., auto-submission tools, scraper) ├── README.md └── .gitignore

yaml
Copy
Edit

Each contest is stored in a folder named after the contest number. Problems are named according to the official problem ID (A, B, C, etc).

---

## 🚀 Getting Started

To clone this repo and get started with your own archive:

```bash
git clone https://github.com/yourusername/codeforces-competition-archive.git
cd codeforces-competition-archive
You can start by adding a new folder under contests/ for your next competition and placing your .cpp or .py files inside.

💻 My Coding Setup
I use the following setup for contests:

Language: C++17 (GCC)

Editor: VSCode with competitive programming extensions

Compiler Flags: -std=c++17 -O2 -Wall

Execution: I use a custom script to compile and run test cases quickly

Online Judge Tools: cf-tool for downloading problems and submitting from the terminal

🔁 Templates
You’ll find my templates under the templates/ directory. They include:

Fast I/O template

Segment Tree & BIT

Graph algorithms (BFS, DFS, Dijkstra)

DSU / Union-Find

Modular arithmetic

Combinatorics (nCr, factorials with mod)

I load the templates into my problems as needed using a snippet plugin in VSCode.

Example:

cpp
Copy
Edit
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
const int INF = 1e18;
const int MOD = 1e9 + 7;

// Example template snippet
int mod_pow(int a, int b, int m = MOD) {
    int res = 1;
    while (b > 0) {
        if (b % 2) res = res * a % m;
        a = a * a % m;
        b /= 2;
    }
    return res;
}
🧾 Naming Convention
To keep everything organized and searchable:

Each file is named after its contest and problem (e.g., 1900A.cpp)

Post-contest updates include an analysis comment block at the top of each file

Files use snake_case or kebab-case only for scripts, camelCase for code where appropriate

🔍 How I Use This Repo
Before a Contest:

Pull latest changes and update templates if needed.

Prepare the directory for the new contest under contests/.

During a Contest:

Write and save problem solutions in the corresponding folder.

Use local testing setup or Codeforces IDE.

After a Contest:

Add notes in the notes/ folder with strategy breakdown and mistakes.

Push changes to the GitHub repo with commit message:
"Add solutions for CF Round #XXXX"

Review Later:

Revisit failed problems, re-implement, or try alternative solutions.

Add editorial links and personal explanations.

🌐 Codeforces Profile
📎 You can view my contest participation and problem-solving history on my Codeforces profile:
→ Click here to visit
(replace YOUR_USERNAME with your actual handle)

📜 License
This repository is licensed under the MIT License.
You're free to use the code and templates, but please give credit where due.

🤝 Contributing
This is primarily a personal archive, but if you're interested in:

Adding new templates

Improving structure

Creating tooling/scripts

…then feel free to fork and open a pull request!

🙌 Acknowledgements
Huge thanks to the Codeforces community for continuous learning opportunities.

Shoutout to cp-algorithms.com for fantastic algorithm references.

Inspired by other CP repositories like those by Errichto, SecondThread, and the_hyp0cr1t3.
