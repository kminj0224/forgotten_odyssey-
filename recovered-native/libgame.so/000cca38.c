/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cca38  Symbol: Lode_Bonus_File */

/* StageSelect::Lode_Bonus_File() */

void __thiscall StageSelect::Lode_Bonus_File(StageSelect *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CCFiniteTimeAction *pCVar5;
  undefined4 uVar6;
  code *pcVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar8;
  float extraout_s1_00;
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [20];
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000ccb40 + 0xcca44));
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0,extraout_s1);
  (*pcVar7)(piVar1,aCStack_30);
  (**(code **)(*(int *)this + 0xcc))(this,piVar1,5,5);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000ccb4c + 0xcca72));
  pcVar7 = *(code **)(*piVar2 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  __mulsf3(*puVar3,0x3f000000);
  iVar4 = (**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar8 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar7)(piVar2,aCStack_28);
  uVar8 = (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0,0);
  pCVar5 = (CCFiniteTimeAction *)
           cocos2d::CCScaleTo::actionWithDuration((float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar6 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_00,extraout_s1_00);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar6,0);
}


