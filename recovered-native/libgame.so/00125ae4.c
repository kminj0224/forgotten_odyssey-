/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125ae4  Symbol: GameRemove */

/* GameScene::GameRemove() */

void __thiscall GameScene::GameRemove(GameScene *this)

{
  int iVar1;
  CCNode *pCVar2;
  int iVar3;
  CCNode **ppCVar4;
  
  iVar3 = DAT_00125ba0 + 0x125af0;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xc);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xc);
    KG_removeChild(pCVar2,true);
  }
  ppCVar4 = *(CCNode ***)(iVar3 + DAT_00125ba4);
  iVar1 = cocos2d::CCNode::getChildByTag(*ppCVar4,0xe);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar4,0xe);
    KG_removeChild(pCVar2,true);
  }
  iVar1 = cocos2d::CCNode::getChildByTag(*ppCVar4,0xd);
  if (iVar1 != 0) {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar4,0xd);
    KG_removeChild(pCVar2,true);
  }
  if (**(CCObject ***)(iVar3 + DAT_00125ba8) != (CCObject *)0x0) {
    cocos2d::CCObject::release(**(CCObject ***)(iVar3 + DAT_00125ba8));
  }
  cocos2d::CCObject::release(**(CCObject ***)(iVar3 + DAT_00125bac));
  cocos2d::CCObject::release(**(CCObject ***)(iVar3 + DAT_00125bb0));
  cocos2d::CCObject::release(**(CCObject ***)(iVar3 + DAT_00125bb4));
  Castle_Att_Effect_Remove();
  Unit_Layer_Remove(this);
  **(undefined4 **)(iVar3 + DAT_00125bb8) = 0;
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar3 + DAT_00125bbc),1);
  cocos2d::CCNode::unscheduleUpdate(pCVar2);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  KG_removeChild(pCVar2,true);
  KG_Remove_Memory();
  return;
}


