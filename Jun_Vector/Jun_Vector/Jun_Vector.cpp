//** version v0.3
#include <iostream>

using namespace std;

// ** 1. 汽戚斗 蓄亜 (歯稽錘 因娃 溌左)
// ** 2. 汽戚斗 肢薦 (壕伸拭辞澗 叔薦稽 肢薦馬形壱 持失馬走澗 省澗陥.)
   //汽戚斗研 災君臣凶蟹 努什団研 災君臣凶 爽稽 床昔陥.
// ** 3. 汽戚斗研 諮脊拝 呪 赤澗 因娃税 滴奄
// ** 4. 薄仙 諮脊鞠嬢赤澗 据社税 鯵呪
// ** 5. 珍砺戚格(杭亜研 眼焼鎧奄 是廃 因娃)税 獣拙 走繊
// ** 6. 珍砺戚格税 曽戟 走繊

//  0 0000000 = 0
//  0 0000001 = 1
//  0 0000010 = 2
//  0 0000011 = 3
//  0 0000100 = 4
//  0 0000101 = 5
//  0 0000110 = 6
//  0 0000111 = 7
//  0 0001000 = 8
//  0 0001001 = 9
//  0 0001010 = 10
//  0 0001011 = 11
//  0 0001100 = 12
//  0 0001101 = 13
//  0 0001110 = 14
//  0 0001111 = 15
//  0 0010000 = 16
//  .
//  .
//  .
//  .
//  0 1111111 = 127 + 1
//  1 0000000 = -1


//   0 0010000 = 16
// - 0 0000110 = 6
//-----------------
// (16 - 6 = 16 + (-6))  
//
// ** 2税 左呪 獣拙
// 0 0 0 0 0 1 1 0 = 6
// 1 1 1 1 1 1 1 1
// -------------------
// 1 1 1 1 1 0 0 1 + 1
// 11111001 + 1
// 11111010 = - 6
// 
//   00010000 = 16
// + 11111010 = -6
// -------------------
//   00001010
//   00001010 = 10
// 
//   0 00000110


int main(void)
{
	/********************
	 
	  char str1[2][5] = {
	  {'A', 'B', 'C', 'D'},
	  {'E', 'F', 'G', 'H'}
	  };

	  char* str2[2] = {
	  {(char*) "ABCD"},
	  {(char*) "EFGH"}
	  };

	  // 識持還 熱戚
	  for (int i = 0; i < 5; ++i)
	      cout << (*str1)[i];
	  cout << endl;
	  printf_s("%s\n", str2[0]);

	  // 鎧亜 廃 熱戚
	  cout << str2[0] << endl;
	  cout << str2[0] + 1 << endl;
	  cout << str2[0] + 2 << endl;
	  // 固魁税 舘嬢 D人 H澗 窒径背挫柔艦陥.
	  cout << str2[0] + 3 << endl;
	  cout << str2[1] + 3 << endl;
	  // 送羨羨悦生稽 馬蟹税 硝督昏聖 窒径背左奄 寿薦
	
	*********************/

	/*
	// ** 丞呪 妊薄税
	char n = 127;
	n += 1;
	printf_s("%d", n);
	*/

	/*
	// ** +尻至引 -尻至掻 陳濃斗拭辞 疏精 域至狛精 
	char n = 16;
	n += -6;    // 戚惟 陳濃斗拭識 疏精 域至狛戚陥.
	n -= 6;
    printf_s("%d", n);
	*/

	/*
	char n = 16;
	printf_s("%d", n >> 1);  // C拭辞幻 亜管馬陥 shift 尻至切 >>
	*/

	/*
	//** 蟹刊奄研 背醤 拝 凶拭澗 * 奄稽 企端拝 呪 赤聖走 溌昔背左壱
	int n = 1920 / 2;
	// int n = 1920 * 0.5f;


	printf_s("%d", n);

	//** 焼掘人 旭戚 習覗闘 尻至切稽 紫遂拝 呪 赤聖走 溌昔背左切.
	// printf_s("%d", n >> 1);

	*/

	//  けけけけけけけけけけけ

	/*
	const int MAX = 16;
	int Vector(MAX);

	int Length = 10;

	for (int i = 0; i < Length; ++i)
	{
		cout << Vector[i] << endl;
	}
	*/

	/*
	//** 壕伸精 0戚 焼観葵生稽幻 段奄鉢亜 亜管馬陥.
	//** 壕伸精 雌呪葵生稽幻 段奄鉢亜 亜管馬陥.

	//** 焼掘人 旭戚 紫遂廃陥檎 是 繕闇精 巷獣拝 呪 赤陥.

	int Size = 0;
	int iter = 0;
	int* Vector = new int[Size];  // 疑旋拝雁聖 拝凶拭澗 痕呪亀 隔聖 呪 赤壱 0亀 隔聖 呪 赤陥. (戚 莫殿澗 壕伸戚 焼艦奄 凶庚拭)


	Vector[iter];
	*/

	//** 壕伸精 焼艦走幻 壕伸坦軍 紫遂拝 呪 赤陥.
	int Size = 10;
	int iter = 0;
	int* Vector = new int[Size];  // 疑旋拝雁聖 拝凶拭澗 痕呪亀 隔聖 呪 赤壱 0亀 隔聖 呪 赤陥. (戚 莫殿澗 壕伸戚 焼艦奄 凶庚拭)


	for (int i = 0; i < Size; ++i)
		Vector[i] = i;

	for (int i = 0; i < Size; ++i)
		cout << Vector[i] << endl;

	for (int i = 0; i < 11; ++i)
		cout << Vector[iter++] << endl;

	Vector[iter++];


	// 壕伸税 掩戚澗 2^n 戚陥.
	// 陳濃斗澗 希馬奄税 奄管精 赤壱 皐奄税 奄管精 蒸陥.

	return 0;
}

//1爽託
/*
//壕伸税 舌繊
  送羨 羨悦戚 亜管馬陥. 送羨 羨悦戚 亜管廃 井酔澗 暗税 蒸陥.
  戚依精 笛 舌繊戚陥. (送羨 羨悦 井酔澗 砧嬢鯵 舛亀鉱拭 蒸陥.)
  疑析廃 滴奄稽 蟹伸鞠嬢 赤陥. >> 羨悦紗亀亜 牌雌 析舛馬陥. ('匙牽陥' 亜 焼艦陥. X)

// 壕伸税 舘繊
  壕伸税 掩戚研 郊蝦呪亜 蒸陥. >> 汽戚斗 疑旋痕発戚 災亜管馬陥.
  戚澗 帖誤旋昔 舘繊戚陥.
  汽戚斗研 嬢巨拭 久澗走 硝呪亜 蒸陥.

// 汽戚斗税 差紫人 戚疑
 汽戚斗税 差紫人 汽戚斗税 戚疑 掻
 戚疑戚 希 獣娃戚 杏鍵陥. 益 汽戚斗研 差紫 板 奄糎 汽戚斗澗 肢薦税 引舛戚奄 凶庚拭
*/

// 2爽託
/*
 壕伸税 奄管聖 潅形爽澗 奄管引 肢薦奄管

// ** 1. 汽戚斗 蓄亜 (歯稽錘 因娃 溌左)
// ** 2. 汽戚斗 肢薦 (壕伸拭辞澗 叔薦稽 肢薦馬形壱 持失馬走澗 省澗陥.)
	  //汽戚斗研 災君臣凶蟹 努什団研 災君臣凶 爽稽 床昔陥.
// ** 3. 汽戚斗研 諮脊拝 呪 赤澗 因娃税 滴奄
// ** 4. 薄仙 諮脊鞠嬢赤澗 据社税 鯵呪
// ** 5. 珍砺戚格(杭亜研 眼焼鎧奄 是廃 因娃)税 獣拙 走繊
// ** 6. 珍砺戚格税 曽戟 走繊

// ** 1. 訊 鞠走?
// ** 2. 訊 照 鞠走?

// ** 据昔歳汐 (姥越拭 'msdn printf' 去 msdn引 敗臆 伊事聖 馬檎 竺誤戚 蟹紳陥.)




*/