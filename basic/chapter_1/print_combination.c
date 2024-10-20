#include <unistd.h>

/// 仕様
/// 3桁の数字の異なるすべての組み合わせを、昇順で標準出力に出力する関数を 作成せよ

void print_combination() {
    int left = 0;

    while (left <= 7) {
        int center = left + 1;
        while (center <= 8) {
            int right = center + 1;
            while (right <= 9)
            {
                /// int to ASCII = int + '0'
                /// '0' は ASCII code で 48, int は数字がそのまま ASCII code の番号となる
                /// 012 の 2 の場合、2(50) = 0(48) + 2(2) になる
                /// () 内は ASCII code.
                char left_char = left + '0';
                char center_char = center + '0';
                char right_char = right + '0';
 
                write(1, &left_char, 1);
                write(1, &center_char, 1);
                write(1, &right_char, 1);
                if (left != 7) {
                    write(1, ",", 1);
                }
                right++;
            }
            center++;
        }
        left++;
    }
}

int main() {
    print_combination();
    return 0;
}

/// 出力
/// 012,013,014,015,016,017,018,019,023,024,025,026,027,028,029,034,035,036,037,038,039,045,046,047,048,049,056,057,058,059,067,068,069,078,079,089,123,124,125,126,127,128,129,134,135,136,137,138,139,145,146,147,148,149,156,157,158,159,167,168,169,178,179,189,234,235,236,237,238,239,245,246,247,248,249,256,257,258,259,267,268,269,278,279,289,345,346,347,348,349,356,357,358,359,367,368,369,378,379,389,456,457,458,459,467,468,469,478,479,489,567,568,569,578,579,589,678,679,689,789% 