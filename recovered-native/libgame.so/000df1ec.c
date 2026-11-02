/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000df1ec  Symbol: Number_Loding */

/* Market_Hero::Number_Loding() */

void __thiscall Market_Hero::Number_Loding(Market_Hero *this)

{
  int *piVar1;
  code *pcVar2;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)N_Draw_Number::node();
  *(int **)(this + 0x128) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0,extraout_s1);
  (*pcVar2)(piVar1,aCStack_30);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x128),9,9);
  N_Draw_Number::SetNumberFont(*(N_Draw_Number **)(this + 0x128),6);
  N_Draw_Number::SetNumber
            (*(N_Draw_Number **)(this + 0x128),
             *(int *)(**(int **)(DAT_000df2e4 + 0xdf232) +
                      (**(int **)(DAT_000df2e8 + 0xdf23a) * 9 + **(int **)(DAT_000df2ec + 0xdf246) +
                      DAT_000df2f0) * 4 + 4),0);
  piVar1 = (int *)N_Draw_Number::node();
  *(int **)(this + 300) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_00,extraout_s1_00);
  (*pcVar2)(piVar1,aCStack_28);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 300),3,3);
  N_Draw_Number::SetNumberFont(*(N_Draw_Number **)(this + 300),3);
  N_Draw_Number::SetNumber(*(N_Draw_Number **)(this + 300),1,2);
  piVar1 = (int *)N_Draw_Number::node();
  *(int **)(this + 0x130) = piVar1;
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_01,extraout_s1_01);
  (*pcVar2)(piVar1,aCStack_20);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x130),3,3);
  N_Draw_Number::SetNumberFont(*(N_Draw_Number **)(this + 0x130),3);
  N_Draw_Number::SetNumber(*(N_Draw_Number **)(this + 0x130),2,2);
  return;
}


