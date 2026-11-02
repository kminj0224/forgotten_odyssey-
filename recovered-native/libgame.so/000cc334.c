/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc334  Symbol: onEnter */

/* EpisodeChild::onEnter() */

void __thiscall EpisodeChild::onEnter(EpisodeChild *this)

{
  undefined4 uVar1;
  CCNode *pCVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float extraout_s0;
  undefined8 uVar8;
  undefined4 local_8c;
  undefined4 local_88;
  CCPoint aCStack_84 [8];
  CCSize aCStack_7c [8];
  _func_void_CCObject_ptr *local_74;
  undefined4 local_70;
  char acStack_6c [80];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000cc448 + 0xcc340);
  local_1c = *piVar5;
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  (**(code **)(*(int *)this + 0x114))(this,1);
  uVar1 = cocos2d::CCMenu::menuWithItems((CCMenuItem *)0x0);
  *(undefined4 *)(this + 0x118) = uVar1;
  cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::getWinSize();
  (**(code **)(**(int **)(this + 0x118) + 0x3c))(*(int **)(this + 0x118),DAT_000cc44c + 0xcc38a);
  iVar6 = 0;
  do {
    sprintf(acStack_6c,(char *)(DAT_000cc450 + 0xcc396),iVar6);
    pCVar2 = (CCNode *)
             cocos2d::CCLabelTTF::labelWithString
                       (acStack_6c,(char *)(DAT_000cc454 + 0xcc3a2),extraout_s0);
    local_74 = *(_func_void_CCObject_ptr **)(DAT_000cc45c + 0xcc3ae);
    local_70 = 0;
    piVar3 = (int *)cocos2d::CCMenuItemLabel::itemWithLabel(pCVar2,(CCObject *)this,local_74);
    iVar7 = iVar6 + 1;
    (**(code **)(**(int **)(this + 0x118) + 200))(*(int **)(this + 0x118),piVar3,iVar6);
    pcVar4 = *(code **)(*piVar3 + 0x3c);
    __mulsf3(local_8c,0x3f000000);
    uVar1 = __floatsisf(iVar7 * 0x28);
    uVar8 = __subsf3(local_88,uVar1);
    cocos2d::CCPoint::CCPoint(aCStack_84,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    uVar8 = (*pcVar4)(piVar3,aCStack_84);
    iVar6 = iVar7;
  } while (iVar7 != 9);
  piVar3 = *(int **)(this + 0x118);
  pcVar4 = *(code **)(*piVar3 + 0x80);
  cocos2d::CCSize::CCSize(aCStack_7c,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  (*pcVar4)(piVar3,aCStack_7c);
  (**(code **)(**(int **)(this + 0x118) + 0x3c))(*(int **)(this + 0x118),DAT_000cc464 + 0xcc42e);
  (**(code **)(*(int *)this + 0xc4))(this,*(undefined4 *)(this + 0x118));
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


