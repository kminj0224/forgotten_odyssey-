/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d6be4  Symbol: Image_Name */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000d6c68) */
/* WARNING: Removing unreachable block (ram,0x000d6c68) */
/* Market_Equip::Image_Name(int) */

void __thiscall Market_Equip::Image_Name(Market_Equip *this,int param_1)

{
  Market_Equip *this_00;
  CCNode *pCVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  
  *(int *)(this + 0x110) = param_1;
  this_00 = this;
  if (*(int *)(this + 0x114) == param_1) {
    this_00 = (Market_Equip *)FUN_000d753c();
  }
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this_00,0);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,3);
  pcVar5 = *(code **)(*piVar2 + 0xd0);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,3);
  uVar3 = cocos2d::CCNode::getChildByTag(pCVar1,2);
  (*pcVar5)(piVar2,uVar3,1);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,3);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,1);
  KG_removeChild(pCVar1,true);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(this + 0x110);
  SetHeroState(this);
  uVar4 = *(int *)(this + 0x114) - 9;
  if (7 < uVar4) {
    uVar4 = FUN_000d753c();
  }
                    /* WARNING: Could not recover jumptable at 0x000d6c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_000d6c6d + (uint)*(ushort *)(&UNK_000d6c6c + uVar4 * 2) * 2))();
  return;
}


