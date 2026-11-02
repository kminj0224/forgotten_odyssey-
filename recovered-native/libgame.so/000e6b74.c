/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6b74  Symbol: Main_Number_Draw */

/* MarketLayer::Main_Number_Draw() */

void __thiscall MarketLayer::Main_Number_Draw(MarketLayer *this)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)N_Draw_Number::node();
  *(int **)(this + 0x114) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0,extraout_s1);
  (*pcVar2)(piVar1,aCStack_28);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x114),0x10,0x10);
  N_Draw_Number::SetNumberFont(*(N_Draw_Number **)(this + 0x114),2);
  piVar3 = *(int **)(DAT_000e6c28 + 0xe6bc0);
  N_Draw_Number::SetMoney
            (*(N_Draw_Number **)(this + 0x114),
             *(int *)(*piVar3 + (**(int **)(DAT_000e6c24 + 0xe6bbc) + DAT_000e6c2c) * 4 + 4),2);
  piVar1 = (int *)N_Draw_Number::node();
  *(int **)(this + 0x118) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_00,extraout_s1_00);
  (*pcVar2)(piVar1,aCStack_20);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x118),0x13,0x13);
  N_Draw_Number::SetNumberFont(*(N_Draw_Number **)(this + 0x118),3);
  N_Draw_Number::SetNumber(*(N_Draw_Number **)(this + 0x118),*(int *)(*piVar3 + DAT_000e6c34),2);
  return;
}


