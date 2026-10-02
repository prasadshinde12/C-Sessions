#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // Store all tasks
    vector<string> tasks;

    int choice;

    do
    {
        cout << "\n========== TO-DO LIST ==========\n";
        cout << "1. Add Task\n";
        cout << "2. Display Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Search Task\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                string task;

                cout << "Enter task: ";
                cin.ignore();
                getline(cin, task);

                // Add the task at the end
                tasks.push_back(task);

                cout << "Task added successfully!\n";
                break;
            }

            case 2:
            {
                cout << "\n========== MY TASKS ==========\n";

                if(tasks.empty()) // Fixed: check if vector is empty
                {
                    cout << "No tasks available.\n";
                }
                else
                {
                    for(int i = 0; i < tasks.size(); i++)
                    {
                        cout << i + 1 << ". "
                             << tasks[i] << endl; // Fixed: accessing element at index i
                    }
                }

                break;
            }

            case 3:
            {
                int taskNo;

                cout << "Enter task number to delete: ";
                cin >> taskNo;

                if(taskNo < 1 || taskNo > tasks.size())
                {
                    cout << "Invalid task number!\n";
                }
                else
                {
                    // Convert task number into vector index
                    int index = taskNo - 1;

                    tasks.erase(tasks.begin() + index);

                    cout << "Task deleted successfully!\n";
                }

                break;
            }

            case 4:
            {
                string keyword;
                bool found = false;

                cout << "Enter keyword to search: ";
                cin.ignore();
                getline(cin, keyword);

                for(int i = 0; i < tasks.size(); i++)
                {
                    if(tasks[i].find(keyword) != string::npos)
                    {
                        cout << i + 1 << ". "
                             << tasks[i] << endl;
                        found = true;
                    }
                }

                if(!found)
                {
                    cout << "No matching task found.\n";
                }

                break;
            }

            case 5:
                cout << "Thank you for using To-Do List!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}