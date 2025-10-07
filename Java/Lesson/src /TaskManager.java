import java.util.ArrayList;
import java.util.Scanner;

public class TaskManager {

    // قائمة لتخزين المهام
    static ArrayList<String> tasks = new ArrayList<>();
    static Scanner input = new Scanner(System.in);

    public static void main(String[] args) {
        int choice;

        System.out.println("===== Task Manager =====");

        // حلقة لا نهائية حتى يختار المستخدم الخروج
        while (true) {
            showMenu();
            System.out.print("Choose an option: ");
            choice = getIntInput();

            switch (choice) {
                case 1 -> addTask();
                case 2 -> showTasks();
                case 3 -> removeTask();
                case 4 -> clearAll();
                case 5 -> {
                    System.out.println("Exiting... Goodbye!");
                    input.close();
                    return;
                }
                default -> System.out.println("❌ Invalid option, please try again.");
            }
        }
    }

    // عرض القائمة الرئيسية
    public static void showMenu() {
        System.out.println("\n---------------------------");
        System.out.println("1️⃣  Add new task");
        System.out.println("2️⃣  Show all tasks");
        System.out.println("3️⃣  Remove a task");
        System.out.println("4️⃣  Clear all tasks");
        System.out.println("5️⃣  Exit");
        System.out.println("---------------------------");
    }

    // إضافة مهمة جديدة
    public static void addTask() {
        System.out.print("Enter task description: ");
        String task = input.nextLine();
        if (!task.isEmpty()) {
            tasks.add(task);
            System.out.println("✅ Task added!");
        } else {
            System.out.println("⚠️  Task cannot be empty.");
        }
    }

    // عرض جميع المهام
    public static void showTasks() {
        if (tasks.isEmpty()) {
            System.out.println("📭 No tasks yet!");
            return;
        }

        System.out.println("\nYour tasks:");
        for (int i = 0; i < tasks.size(); i++) {
            System.out.println((i + 1) + ". " + tasks.get(i));
        }
    }

    // حذف مهمة
    public static void removeTask() {
        showTasks();
        if (tasks.isEmpty()) return;

        System.out.print("Enter the task number to remove: ");
        int index = getIntInput();

        if (index > 0 && index <= tasks.size()) {
            String removed = tasks.remove(index - 1);
            System.out.println("🗑️  Removed: " + removed);
        } else {
            System.out.println("⚠️  Invalid number.");
        }
    }

    // حذف جميع المهام
    public static void clearAll() {
        tasks.clear();
        System.out.println("🧹 All tasks cleared!");
    }

    // قراءة رقم آمن من المستخدم
    public static int getIntInput() {
        while (!input.hasNextInt()) {
            System.out.print("Please enter a valid number: ");
            input.next();
        }
        int num = input.nextInt();
        input.nextLine(); // مسح السطر
        return num;
    }
}