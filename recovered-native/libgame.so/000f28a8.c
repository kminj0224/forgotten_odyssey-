/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f28a8  Symbol: Hero_Skill_Button_Effect_Visible */

/* Hero_Skill_Button_Effect_Visible(bool) */

void Hero_Skill_Button_Effect_Visible(bool param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  CCNode **ppCVar4;
  
  ppCVar4 = *(CCNode ***)(DAT_000f28dc + 0xf28b4);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar4,3);
  iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,1);
  if (iVar2 != 0) {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar4,3);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
    (**(code **)(*piVar3 + 0x6c))(piVar3,param_1);
  }
  return;
}


