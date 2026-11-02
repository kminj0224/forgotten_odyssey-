/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014b2a0  Symbol: onEnter */

/* cocos2d::CCTransitionFade::onEnter() */

void __thiscall cocos2d::CCTransitionFade::onEnter(CCTransitionFade *this)

{
  int iVar1;
  undefined4 uVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  CCTransitionScene::onEnter((CCTransitionScene *)this);
  uVar2 = CCLayerColor::layerWithColor((_ccColor4B *)(this + 0x10a));
  iVar1 = DAT_0014b33c;
  (**(code **)(**(int **)(this + 0xfc) + 0x6c))(*(int **)(this + 0xfc),0);
  (**(code **)(*(int *)this + 0xcc))(this,uVar2,2,iVar1);
  CCNode::getChildByTag((CCNode *)this,iVar1);
  fVar6 = (float)__mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  pCVar3 = (CCFiniteTimeAction *)CCFadeIn::actionWithDuration(fVar6);
  uVar2 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014b340 + 0x14b2f8),(_func_void *)0x0);
  fVar6 = (float)__mulsf3(*(undefined4 *)(this + 0x104),0x3f000000);
  uVar4 = CCFadeOut::actionWithDuration(fVar6);
  uVar5 = CCCallFunc::actionWithTarget
                    ((CCCallFunc *)this,*(CCObject **)(DAT_0014b344 + 0x14b31a),(_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
  CCSequence::actions(pCVar3,uVar2,uVar4,uVar5,0);
}


