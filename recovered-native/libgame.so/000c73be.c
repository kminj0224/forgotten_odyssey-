/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c73be  Symbol: FUN_000c73be */

void FUN_000c73be(void)

{
  int iVar1;
  int **unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  undefined8 uVar2;
  _KG_Animation *param_12;
  CCNode *param_14;
  CCSize param_15;
  int param_16;
  CCSize param_17;
  undefined4 param_18;
  undefined4 param_19;
  undefined4 param_20;
  
  iVar1 = *unaff_r6;
  param_12 = *(_KG_Animation **)(unaff_r7 * 4 + iVar1);
  __floatsisf(*(undefined4 *)(iVar1 + 0x284));
  uVar2 = __floatsisf(*(undefined4 *)(iVar1 + 0x280));
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)&stack0x000000cc,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCPoint::CCPoint
            ((CCPoint *)&stack0x000000d4,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  iVar1 = **unaff_r5;
  __floatsisf(*(undefined4 *)(iVar1 + 0x288));
  uVar2 = __floatsisf(*(undefined4 *)(iVar1 + 0x28c));
  cocos2d::CCSize::CCSize((CCSize *)&stack0x000000dc,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20))
  ;
  vScriptImgDraw_Fram(param_14,&stack0x000001f8,param_12,param_15,param_16,unaff_r7,unaff_r7,
                      param_17);
  FUN_000c661a();
  FUN_000c6af0();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


