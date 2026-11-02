/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cba30  Symbol: StageCall */

/* StageSelectChild::StageCall(cocos2d::CCObject*) */

void __thiscall StageSelectChild::StageCall(StageSelectChild *this,CCObject *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
  **(undefined4 **)(DAT_000cba8c + 0xcba44) = uVar1;
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_000cba90 + 0xcba4c),uVar1);
}


