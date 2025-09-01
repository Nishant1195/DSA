import os

# Root folder of your repo
ROOT_DIR = "."

# Output README file
README_FILE = "README.md"

# Folders to ignore
IGNORE_FOLDERS = {".vscode", "Striver"}

def generate_readme():
    sections = {}
    
    # Walk through directories and collect .cpp files
    for root, dirs, files in os.walk(ROOT_DIR):
        # Modify dirs in-place to skip unwanted folders
        dirs[:] = [d for d in dirs if d not in IGNORE_FOLDERS]

        for file in files:
            # Skip unwanted files
            if file.endswith(".exe"):
                continue
            if not file.endswith(".cpp"):
                continue

            rel_path = os.path.join(root, file).replace("\\", "/")  # For Windows
            folder = os.path.basename(os.path.dirname(rel_path)) or "Root"
            
            if folder not in sections:
                sections[folder] = []
            
            sections[folder].append((file.replace(".cpp", ""), rel_path))
    
    # Start writing README
    with open(README_FILE, "w", encoding="utf-8") as f:
        f.write("# DSA Problem Solutions\n\n")
        f.write("This repository contains my solutions to various **DSA problems** implemented in **C++**.\n\n")
        f.write("---\n\n")
        
        # Write sections
        for section, files in sorted(sections.items()):
            f.write(f"## 📂 {section}\n")
            
            # Sort numerically if possible
            def sort_key(item):
                name, _ = item
                try:
                    return int(name)   # numeric order
                except ValueError:
                    return name        # fallback to string order
            
            for name, path in sorted(files, key=sort_key):
                f.write(f"- [{name.replace('_', ' ')}]({path})\n")
            f.write("\n")
        
        # Extra info
        f.write("---\n\n")
        f.write("## 🚀 How to Run\n\n")
        f.write("Clone the repository and compile any file using g++:\n\n")
        f.write("```bash\n")
        f.write("g++ path/to/file.cpp -o output\n")
        f.write("./output\n")
        f.write("```\n\n")
        
        f.write("---\n\n")
        f.write("## 📝 Notes\n")
        f.write("- All solutions are written in **C++17**.\n")
        f.write("- Problems are organized topic-wise (e.g., Arrays, Strings, Dynamic Programming).\n")

    print(f"✅ README.md generated successfully!")

if __name__ == "__main__":
    generate_readme()
