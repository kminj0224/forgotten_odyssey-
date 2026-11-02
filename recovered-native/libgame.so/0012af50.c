/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012af50  Symbol: Monster_Loding */

/* GameScene::Monster_Loding() */

void __thiscall GameScene::Monster_Loding(GameScene *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  
  piVar1 = (int *)operator_new(0x60);
  ppiVar3 = *(int ***)(DAT_0012afa0 + 0x12af64);
  puVar2 = *(undefined4 **)(DAT_0012afa4 + 0x12af66);
  *ppiVar3 = piVar1;
  *puVar2 = 0;
  init_Stage_Value((_Stage_Value *)piVar1);
  Stage_Value_Pass((_Stage_Value *)*ppiVar3,
                   **(int **)(DAT_0012afa8 + 0x12af78) + -1 +
                   (**(int **)(DAT_0012afac + 0x12af82) + -1) * 10);
  Stage_Mode((CCNode *)this,**ppiVar3,(_Stage_Value *)*ppiVar3);
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}


