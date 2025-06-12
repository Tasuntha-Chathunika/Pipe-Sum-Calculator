# Pipe Sum Calculator 🧮 (C Program with Fork and Pipe)

This project demonstrates **Inter-Process Communication (IPC)** in **C** using `fork()` and `pipe()` system calls.

## 👨‍💻 How It Works

- The **parent process** takes two numbers from the user.
- It sends them to the **child process** via two separate pipes.
- The **child process** receives them, calculates the sum, and displays the result.

## 📂 File Included

- `pipe_sum.c`: Main source code file.

## 🔧 How to Run

1. Compile the code:
   ```bash
   gcc pipe_sum.c -o pipe_sum
```

2.Run the program:
```bash
./pipe_sum
```

## 🧪 Example Output
![example](screenshots/screenshot1.png)

## ✍️ Author
**S.D.Tasuntha Chathunika** 
🎓 University of Vavuniya – Faculty of Information and Communication Technology  
📅 Date: 2025-06-09
🔗 [GitHub Profile](https://github.com/Tasuntha-Chathunika)
