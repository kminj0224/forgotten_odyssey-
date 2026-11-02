/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112d64  Symbol: Stun_Call_Back */

/* Stun_Call_Back(float, cocos2d::CCLayer*) */

void Stun_Call_Back(float param_1,CCLayer *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_r1;
  code *pcVar4;
  int *this;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = (**(code **)(*in_r1 + 0xa8))(in_r1);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x93) != '\0') {
    puVar5 = (undefined4 *)(*(int *)(iVar1 + 4) + 0x94);
    uVar2 = __addsf3(*puVar5,param_2);
    *puVar5 = uVar2;
    iVar6 = *(int *)(iVar1 + 4);
    iVar3 = __aeabi_fcmpge(*(undefined4 *)(iVar6 + 0x94),*(undefined4 *)(iVar6 + 0x98));
    if (iVar3 != 0) {
      if (1 < *(int *)(iVar6 + 100) - 3U) {
        StunInit((CCLayer *)in_r1);
      }
      this = *(int **)(*(int *)(iVar1 + 4) + 0x11c);
      pcVar4 = *(code **)(*this + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_00112dd0);
      (*pcVar4)(this,uVar2,1);
    }
  }
  return;
}


