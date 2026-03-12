#include <iostream>
using namespace std;

class Cube {
public:
    // 设置/获取函数 (Setters & Getters)
    void setL(int l) { m_L = l; }
    int getL() const { return m_L; } // 加上const表示该函数不会修改成员变量
    void setW(int w) { m_W = w; }
    int getW() const { return m_W; }
    void setH(int h) { m_H = h; }
    int getH() const { return m_H; }

    // 计算面积和体积
    int calculateS() const { return 2 * (m_L * m_W + m_L * m_H + m_W * m_H); }
    int calculateV() const { return m_L * m_W * m_H; }

    // 类内判断：对比当前立方体(this)和传入立方体(c)的体积
    // const Cube &c 防止修改传入的对象；末尾的 const 表示不修改当前对象
    bool sameInClass(const Cube &c) const {
        return calculateV() == c.calculateV();
    }

private:
    int m_L, m_W, m_H;
};

// 全局函数判断
bool same(const Cube &c1, const Cube &c2) {
    return c1.calculateV() == c2.calculateV();
}

int main() {
    system("chcp 65001 > nul"); // 优化输出：隐藏chcp的提示信息

    Cube c1; c1.setL(5); c1.setH(8); c1.setW(10);
    Cube c2; c2.setL(8); c2.setH(5); c2.setW(10);

    cout << "c1体积: " << c1.calculateV() << " | c2体积: " << c2.calculateV() << endl;

    // 使用简化后的判断逻辑
    if (c1.sameInClass(c2)) {
        cout << "结论：体积相等！" << endl;
    } else {
        cout << "结论：体积不相等！" << endl;
    }

    return 0;
}