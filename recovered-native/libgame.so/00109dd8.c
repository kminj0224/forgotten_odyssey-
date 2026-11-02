/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00109dd8  Symbol: visit */

/* Clear_Item_View_Layer::visit() */

undefined8 __thiscall Clear_Item_View_Layer::visit(Clear_Item_View_Layer *this)

{
  undefined4 uVar1;
  int iVar2;
  CCDirector *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar2 = DAT_00109e88;
  uVar1 = DAT_00109e84;
  glEnable(DAT_00109e84);
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar4 = __mulsf3(uVar4,DAT_00109e8c);
  puVar8 = *(undefined4 **)(iVar2 + 0x109df2);
  uVar4 = __mulsf3(uVar4,*puVar8);
  __divsf3(uVar4,DAT_00109e90);
  uVar4 = __fixsfsi();
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar5 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar5 = __mulsf3(uVar5,DAT_00109e94);
  uVar5 = __mulsf3(uVar5,puVar8[1]);
  __divsf3(uVar5,DAT_00109e98);
  uVar5 = __fixsfsi();
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar6 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar6 = __mulsf3(uVar6,DAT_00109e9c);
  uVar6 = __mulsf3(uVar6,*puVar8);
  __divsf3(uVar6,DAT_00109e90);
  uVar6 = __fixsfsi();
  pCVar3 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar7 = cocos2d::CCDirector::getContentScaleFactor(pCVar3);
  uVar7 = __mulsf3(uVar7,DAT_00109ea0);
  uVar7 = __mulsf3(uVar7,puVar8[1]);
  __divsf3(uVar7,DAT_00109e98);
  uVar7 = __fixsfsi();
  glScissor(uVar4,uVar5,uVar6,uVar7);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(uVar1);
  return CONCAT44(this,uVar6);
}


