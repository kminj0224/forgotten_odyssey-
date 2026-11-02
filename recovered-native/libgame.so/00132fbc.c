/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00132fbc  Symbol: Lode_Naxt_Icon */

/* Ending_Layer::Lode_Naxt_Icon() */

void __thiscall Ending_Layer::Lode_Naxt_Icon(Ending_Layer *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  CCFiniteTimeAction *pCVar5;
  code *pcVar6;
  undefined4 uVar7;
  float extraout_s0;
  float fVar8;
  float extraout_s0_00;
  float extraout_s1;
  undefined8 uVar9;
  float extraout_s1_00;
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_00133094 + 0x132fca));
  *(int **)(this + 0x124) = piVar1;
  pcVar6 = *(code **)(*piVar1 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0,extraout_s1);
  (*pcVar6)(piVar1,aCStack_38);
  piVar1 = *(int **)(this + 0x124);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)(this + 0x110) + 0x38))();
  uVar7 = *puVar2;
  puVar2 = (undefined4 *)(**(code **)(**(int **)(this + 0x110) + 0x7c))();
  uVar3 = __mulsf3(*puVar2,0x3f000000);
  uVar3 = __addsf3(uVar7,uVar3);
  uVar9 = __subsf3(uVar3,DAT_00133098);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar1,aCStack_30);
  (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x124),10,10);
  iVar4 = (**(code **)(**(int **)(this + 0x124) + 0x38))();
  uVar9 = __subsf3(*(undefined4 *)(iVar4 + 4),DAT_001330a0);
  fVar8 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar8,(CCPoint *)0x3f000000);
  fVar8 = (float)cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_00,extraout_s1_00);
  uVar3 = cocos2d::CCMoveTo::actionWithDuration(fVar8,DAT_001330a4);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar3,0);
}


