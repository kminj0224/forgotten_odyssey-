/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f4f50  Symbol: FUN_000f4f50 */

void FUN_000f4f50(void)

{
  CCLayer *pCVar1;
  int iVar2;
  int *piVar3;
  int in_r3;
  int *unaff_r4;
  int iVar4;
  int **unaff_r6;
  int iVar5;
  float extraout_s0;
  float extraout_s1;
  undefined param_9;
  int param_11;
  undefined4 param_12;
  undefined4 param_13;
  
  if (in_r3 != 7) {
    pCVar1 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*unaff_r6,1);
    ani_Base_ani(pCVar1);
    (**(code **)(**unaff_r6 + 0x2c))(*unaff_r6,0x3f800000);
    *(undefined4 *)(unaff_r4[1] + 100) = 0xffffffff;
    *(undefined *)(unaff_r4[1] + 0x75) = param_9;
    *(undefined *)(unaff_r4[1] + 0x76) = param_9;
    *(undefined *)(unaff_r4[1] + 0x77) = param_9;
    *(undefined *)(unaff_r4[1] + 0x78) = param_9;
  }
  iVar4 = unaff_r4[1];
  iVar5 = *(int *)(iVar4 + 100);
  if (iVar5 != -1) {
    if ((**(int **)(param_11 + DAT_000f5088) != 0) &&
       (iVar2 = __aeabi_fcmplt(*(undefined4 *)((iVar5 + -2) * 4 + *(int *)(param_11 + DAT_000f508c))
                               ,*(undefined4 *)(iVar4 + 0x3c)), iVar2 != 0)) {
      cocos2d::CCSize::CCSize((CCSize *)&stack0x00000058,extraout_s0,extraout_s1);
      *(undefined4 *)(iVar4 + 0x110) = param_12;
      *(undefined4 *)(iVar4 + 0x114) = param_13;
      iVar4 = 0;
      *(undefined4 *)(unaff_r4[1] + 100) = 0;
      do {
        *(undefined *)(unaff_r4[1] + iVar4 + 0x75) = 0;
        piVar3 = *unaff_r6;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(unaff_r4[1] + 0x3c) = 0;
        Hero_Kill_Tartget_Array_Init((CCLayer *)piVar3);
      } while (iVar4 != 4);
      FUN_000f5044();
      return;
    }
    iVar4 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(iVar5 * 4 + *unaff_r4) + 0x294),
                           *(undefined4 *)(iVar4 + 0x3c));
    if (iVar4 != 0) {
      Hero_Kill_Tartget_Array_Init((CCLayer *)*unaff_r6);
      iVar4 = 0;
      *(undefined4 *)(unaff_r4[1] + 100) = 0;
      do {
        *(undefined *)(unaff_r4[1] + iVar4 + 0x75) = 0;
        piVar3 = *unaff_r6;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(unaff_r4[1] + 0x3c) = 0;
        Hero_Kill_Tartget_Array_Init((CCLayer *)piVar3);
      } while (iVar4 != 4);
      FUN_000f5044();
      return;
    }
  }
  return;
}


