# Codeforces Competition Archive

Welcome to my Codeforces Competition Archive!  
This repository is a personal collection of my solutions from Codeforces contests. It serves as both a historical record of my competitive programming journey and a practical resource where I can track, reflect, and improve upon my problem-solving skills.

Whether you're browsing for inspiration, checking out how I solve problems, or looking to start your own archive, I hope this repository helps in some way. Let's dive in.

---

## 🚀 Purpose

The main reason I created this repository is to **organize my Codeforces submissions** in a meaningful way. During competitions, it's easy to get lost in the fast pace of solving problems, submitting, debugging, and moving on. Afterward, many programmers (myself included) forget to revisit those problems.

This repository aims to solve that problem by:
- **Keeping track** of every contest I've participated in
- **Saving solutions** in an organized directory structure
- **Allowing easy review** of problems I struggled with
- **Improving long-term retention** of algorithms and patterns

It's also useful as a personal backup in case something happens to my local files or online accounts.

---

## 📁 Repository Structure

The organization of the repository is simple and scalable:

codeforces-competition-archive/ │ ├── contests/ │ ├── 1900/ │ │ ├── A.cpp │ │ ├── B.cpp │ │ ├── C.cpp │ │ └── ... │ ├── 1901/ │ │ └── ... │ └── ... │ ├── templates/ │ └── template.cpp # Base C++ template with useful macros │ ├── notes/ │ ├── 1900_notes.md # Contest analysis, postmortems, or lessons │ └── general_tips.md │ └── README.md


- `contests/`: Contains a folder for each Codeforces contest I’ve participated in. Each folder has individual `.cpp` files named according to the problem label (A, B, C, etc).
- `templates/`: Reusable snippets, utility functions, and competitive programming templates.
- `notes/`: Optional notes for reflection, explanations of problems, and reminders to myself.
- `README.md`: This file you're reading now.

---

## 🧠 How I Use This Repo

Here’s a general workflow I follow using this repository:

### Before the Contest
- Prepare the `contests/` directory with the new contest number.
- Make sure my template is updated and copied over for easy access.
- Launch my editor (usually VS Code) and terminal with everything set.

### During the Contest
- Write code as I solve each problem.
- Save files like `A.cpp`, `B.cpp`, etc., within the contest directory.
- Test locally using input/output redirection or a custom checker script.

### After the Contest
- Add notes about the contest: what went well, what didn’t, what I learned.
- Review problems I failed or skipped, and add editorial links or personal solutions later.
- Push the entire folder to GitHub with a descriptive commit message.

This workflow helps build a discipline of reflection and organization — two very underrated skills in competitive programming.

---

## 🔧 My Setup

Here’s a quick overview of the tools and environment I use for competitive programming on Codeforces:

- **Language**: C++17 or C++20 (depending on support)
- **Editor**: Visual Studio Code with snippets and auto-run tasks
- **Compiler**: `g++` with flags: `-std=c++17 -O2 -Wall -Wextra`
- **Testing**: Simple bash scripts for input/output file testing
- **Tools**:
  - [`cf-tool`](https://github.com/xalanq/cf-tool): Download and submit problems via terminal
  - [`Competitive Companion`](https://github.com/jmerle/competitive-companion): Browser extension to quickly fetch problems

I also keep a `template.cpp` file that includes macros, type aliases, fast I/O, and common functions like binary exponentiation or sieve of Eratosthenes.

---

## 🧰 Templates

Templates are key to saving time and reducing stress during fast-paced contests. My `template.cpp` includes:

- Fast input/output
- Macros like `#define int long long` (when needed)
- Utility functions: `gcd`, `lcm`, `mod_pow`, etc.
- Pre-written data structures: `DSU`, `Segment Tree`, etc.
- Graph algorithms: `BFS`, `DFS`, `Dijkstra`, `Topological Sort`

I try not to over-rely on templates during practice to improve memory and understanding, but during rated contests, they’re a huge help.

---

## 📌 Naming Conventions

To maintain consistency, I use the following rules:

- Each contest has its own numbered folder (e.g., `1900/`, `1901/`)
- Each problem inside is saved using its label: `A.cpp`, `B.cpp`, etc.
- If I revisit or improve a solution later, I may add a suffix like `B_alt.cpp` or `B_explained.cpp`
- Notes are saved as `1900_notes.md` or named according to themes (e.g., `binary_search_notes.md`)

This makes navigation quick and prevents clutter over time.

---

## 📈 Goals

Aside from organizing my submissions, this repository helps me focus on improvement through habit:

- Review wrong answers after contests
- Annotate files with what went wrong
- Track patterns of mistakes (off-by-one, wrong base case, time limit, etc.)
- Create a custom “error log” in the notes folder

My long-term goal is to raise my Codeforces rating and become a more confident problem solver in contests and real-world scenarios alike.

---

## 🌐 My Codeforces Profile

You can find my contest history, rating, and submissions on my official Codeforces profile:

🔗 [https://codeforces.com/profile/YOUR_USERNAME](https://codeforces.com/profile/YOUR_USERNAME)  
_(Replace `YOUR_USERNAME` with your actual handle.)_

Feel free to check out the problems I’ve solved there if you're interested in comparing approaches or learning from different solutions.

---

## 📜 License

This project is open-source under the **MIT License**. You’re welcome to clone, fork, or use the structure and templates for your own competitive programming workflow.  
If you do, a credit or star is always appreciated but not required!

---

## 🧠 Final Thoughts

Competitive programming is not just about solving problems — it’s about building habits: consistency, pattern recognition, efficiency under pressure, and structured thinking.

This repository is more than just a folder of code. It’s a timeline of learning. Some problems will have messy solutions, and some might be overkill. Some might be wrong — and that’s okay. What matters is using this as a space to get better over time.

If you’ve made it this far — thanks for reading, and I hope you found something useful here.

Happy coding and see you on the leaderboard! 🚀
