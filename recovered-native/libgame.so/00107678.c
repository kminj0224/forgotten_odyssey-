/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00107678  Symbol: KG_Monster_Draw */

/* KG_Monster_Draw(cocos2d::CCNode*, int) */

void KG_Monster_Draw(CCNode *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *this;
  CCNode *this_00;
  CCArray *this_01;
  int *piVar3;
  CCTexture2D *pCVar4;
  int *piVar5;
  uint uVar6;
  _Unit_Stage *__dest;
  void *__src;
  _KG_Unit_State *this_02;
  uint uVar7;
  code *pcVar8;
  int *piVar9;
  
  uVar1 = __mulsf3(*(undefined4 *)(*(int *)(DAT_001077ec + 0x107684) + 4),0x3f000000);
  uVar1 = __addsf3(uVar1,DAT_001077f0);
  Random(-0x1e,0x1e);
  uVar2 = __floatsisf();
  uVar1 = __addsf3(uVar1,uVar2);
  this = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  piVar9 = **(int ***)(DAT_001077f4 + 0x1076c8);
  __subsf3(DAT_001077f8,uVar1);
  uVar1 = __fixsfsi();
  (**(code **)(*piVar9 + 0xcc))(piVar9,this,uVar1,param_2);
  cocos2d::CCObject::release((CCObject *)this);
  this_00 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,param_2);
  piVar9 = (int *)cocos2d::CCNode::getChildByTag(this_00,param_2);
  this_01 = (CCArray *)(**(code **)(*piVar9 + 0x58))();
  uVar7 = 0;
  while( true ) {
    uVar6 = cocos2d::CCArray::count(this_01);
    if (uVar6 <= uVar7) break;
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this_01,uVar7);
    pCVar4 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))();
    piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4);
    pcVar8 = *(code **)(*piVar5 + 0x3c);
    uVar1 = (**(code **)(*piVar3 + 0x38))(piVar3);
    (*pcVar8)(piVar5,uVar1);
    pcVar8 = *(code **)(*piVar5 + 0xec);
    uVar1 = (**(code **)(*piVar3 + 0xe8))(piVar3);
    (*pcVar8)(piVar5,uVar1);
    pcVar8 = *(code **)(*piVar5 + 0x2c);
    uVar1 = (**(code **)(*piVar3 + 0x28))(piVar3);
    (*pcVar8)(piVar5,uVar1);
    pcVar8 = *(code **)(*piVar5 + 0x34);
    uVar1 = (**(code **)(*piVar3 + 0x30))(piVar3);
    (*pcVar8)(piVar5,uVar1);
    (**(code **)(*this + 0xcc))(this,piVar5,uVar7,uVar7);
    uVar7 = uVar7 + 1;
  }
  __dest = (_Unit_Stage *)operator_new(0x24);
  (**(code **)(*piVar9 + 0xa8))(piVar9);
  __src = (void *)(**(code **)(*piVar9 + 0xa8))(piVar9);
  memcpy(__dest,__src,0x24);
  this_02 = (_KG_Unit_State *)operator_new(0x140);
  _KG_Unit_State::_KG_Unit_State(this_02);
  *(_KG_Unit_State **)(__dest + 4) = this_02;
  Init_Unit_Stage(__dest);
  (**(code **)(*this + 0xac))(this,__dest);
  ani_Move_ani((CCLayer *)this);
  return;
}


