#include <iostream>
#include <thread>
#include <vector>
#include <string>

// 线程要执行的函数
void worker_task(int id, const std::string& msg) {
    std::cout << "[Thread " << id << "] 收到任务: " << msg << std::endl;
    
    // 模拟线程在干活
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
    std::cout << "[Thread " << id << "] 任务完成！" << std::endl;
}

int main() {
    std::cout << "[Main Thread] 主程序启动，准备创建子线程..." << std::endl;

    // 创建一个线程容器
    std::vector<std::thread> workers;

    // 启动两个子线程
    workers.push_back(std::thread(worker_task, 1, "去后厨拿调料"));
    workers.push_back(std::thread(worker_task, 2, "去前台招呼客人"));

    // 等待所有子线程执行完毕（合流）
    for (auto& t : workers) {
        if (t.joinable()) {
            t.join(); // 主线程会在这里卡住，直到对应的子线程干完活
        }
    }

    std::cout << "[Main Thread] 所有子线程都到家了，主程序退出。" << std::endl;
    return 0;
}