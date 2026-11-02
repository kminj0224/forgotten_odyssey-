/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ecf74  Symbol: FUN_000ecf74 */

void FUN_000ecf74(float param_1)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  int *unaff_r5;
  float fVar5;
  float extraout_s0;
  undefined8 uVar6;
  float extraout_s1;
  int param_9;
  int param_11;
  int param_12;
  int param_13;
  int *param_14;
  undefined param_16;
  undefined param_17;
  undefined param_19;
  undefined param_20;
  int in_stack_0000026c;
  
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (*(char **)(param_11 + param_13 * 0x10 + 0xc),
                             (char *)(DAT_000ed03c + 0xecf84),param_1);
  param_16 = 0xde;
  param_17 = 0xff;
  uVar6 = (**(code **)(*piVar1 + 0xf4))();
  pcVar4 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x0000015c,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar6 = (*pcVar4)(piVar1,&stack0x0000015c);
  pcVar4 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x00000164,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar4)(piVar1,&stack0x00000164);
  fVar5 = (float)(**(code **)(*unaff_r5 + 0xcc))(unaff_r5,piVar1,0x29,0x29);
  if (param_12 == 0xb) {
    pcVar3 = (char *)(DAT_000ed114 + 0xed062);
    pcVar2 = *(char **)(*(int *)(param_9 + DAT_000ed110) + (unaff_r5[0x44] + -1) * 0x20 + 0xc);
  }
  else {
    pcVar3 = (char *)(DAT_000ed04c + 0xecff0);
    pcVar2 = *(char **)(*(int *)(param_9 + DAT_000ed048) + param_13 * 0x10 + 8);
  }
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString(pcVar2,pcVar3,fVar5);
  pcVar4 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint((CCPoint *)&stack0x0000016c,extraout_s0,extraout_s1);
  (*pcVar4)(piVar1,&stack0x0000016c);
  param_19 = 0xff;
  param_20 = 0xff;
  uVar6 = (**(code **)(*piVar1 + 0xf4))(piVar1);
  pcVar4 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x00000174,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar4)(piVar1,&stack0x00000174);
  (**(code **)(*unaff_r5 + 0xcc))(unaff_r5,piVar1,0x1b,0x1b);
  Hero_HeroSkill::SetUpgrade_Button((Hero_HeroSkill *)unaff_r5,param_12);
  if (in_stack_0000026c != *param_14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


