/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001043a4  Symbol: Unit_init_layer */

/* Monster::Unit_init_layer(int) */

void __thiscall Monster::Unit_init_layer(Monster *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  CCAnimation *pCVar3;
  CCObject *pCVar4;
  undefined4 uVar5;
  CCSpriteFrameCache *this_01;
  int *piVar6;
  CCMutableArray *pCVar7;
  int *piVar8;
  int iVar9;
  int local_e4;
  Monster *local_e0;
  undefined4 local_dc;
  char acStack_d0 [32];
  char acStack_b0 [32];
  char acStack_90 [32];
  char acStack_70 [32];
  char acStack_50 [52];
  int local_1c;
  
  piVar8 = *(int **)(DAT_00104570 + 0x1043b0);
  local_1c = *piVar8;
  memset(acStack_50,0,0x32);
  memset(acStack_d0,0,0x1e);
  memset(acStack_b0,0,0x1e);
  memset(acStack_90,0,0x1e);
  memset(acStack_70,0,0x1e);
  sprintf(acStack_50,(char *)(DAT_00104574 + 0x1043f2),param_1,param_1);
  sprintf(acStack_d0,(char *)(DAT_00104578 + 0x104400),param_1);
  sprintf(acStack_b0,(char *)(DAT_0010457c + 0x10440c),param_1);
  sprintf(acStack_90,(char *)(DAT_00104580 + 0x104418),param_1);
  sprintf(acStack_70,(char *)(DAT_00104584 + 0x104424),param_1);
  puVar2 = (undefined4 *)operator_new(0x24);
  *puVar2 = 0;
  (**(code **)(*(int *)this + 0xac))(this,puVar2);
  puVar2[6] = param_1;
  iVar9 = 0;
  do {
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,0);
    iVar1 = iVar9 + 0x120;
    iVar9 = iVar9 + 4;
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + iVar1) = this_00;
  } while (iVar9 != 0x10);
  Monster_Lode(acStack_50,acStack_d0,1,5,*(CCAnimate **)(this + 0x110),
               *(CCMutableArray **)(this + 0x120),0);
  Monster_Lode(acStack_50,acStack_b0,1,9,*(CCAnimate **)(this + 0x114),
               *(CCMutableArray **)(this + 0x124),1);
  Monster_Lode(acStack_50,acStack_90,1,9,*(CCAnimate **)(this + 0x118),
               *(CCMutableArray **)(this + 0x128),1);
  Monster_Lode(acStack_50,acStack_70,1,9,*(CCAnimate **)(this + 0x11c),
               *(CCMutableArray **)(this + 300),1);
  local_e4 = 0;
  local_e0 = this;
  do {
    if (local_e4 == 0) {
      local_dc = DAT_00104588;
    }
    else {
      local_dc = DAT_0010458c;
    }
    pCVar3 = (CCAnimation *)
             cocos2d::CCAnimation::animationWithFrames(*(CCMutableArray **)(local_e0 + 0x120));
    pCVar4 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar3);
    *(CCObject **)(local_e0 + 0x110) = pCVar4;
    pCVar7 = *(CCMutableArray **)(local_e0 + 0x120);
    uVar5 = __floatunsisf(*(int *)(pCVar7 + 0x18) - *(int *)(pCVar7 + 0x14) >> 2);
    uVar5 = __mulsf3(uVar5,local_dc);
    *(undefined4 *)(pCVar4 + 0x20) = uVar5;
    cocos2d::CCObject::retain(*(CCObject **)(local_e0 + 0x110));
    local_e4 = local_e4 + 1;
    local_e0 = local_e0 + 4;
  } while (local_e4 != 4);
  piVar6 = *(int **)(*(int *)(this + 0x120) + 0x14);
  iVar9 = *(int *)(*(int *)(this + 0x120) + 0x18) - (int)piVar6 >> 2;
  if (iVar9 != 0) {
    iVar9 = *piVar6;
  }
  uVar5 = __fixsfsi(*(undefined4 *)(iVar9 + 0x30));
  puVar2[2] = uVar5;
  piVar6 = *(int **)(*(int *)(this + 0x120) + 0x14);
  iVar9 = *(int *)(*(int *)(this + 0x120) + 0x18) - (int)piVar6 >> 2;
  if (iVar9 != 0) {
    iVar9 = *piVar6;
  }
  uVar5 = __fixsfsi(*(undefined4 *)(iVar9 + 0x34));
  puVar2[3] = uVar5;
  this_01 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(this_01,acStack_50);
  if (local_1c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


