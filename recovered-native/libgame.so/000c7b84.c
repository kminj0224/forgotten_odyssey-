/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7b84  Symbol: Particle_Body_Draw */

/* Particle_Body_Draw(cocos2d::CCLayer*, cocos2d::CCSprite*, float, int, int, int, int, int, int) */

void Particle_Body_Draw(CCLayer *param_1,CCSprite *param_2,float param_3,int param_4,int param_5,
                       int param_6,int param_7,int param_8,int param_9)

{
  CCAction *pCVar1;
  CParticle *this;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s2_00;
  int in_stack_00000010;
  
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,param_2,in_stack_00000010 + 1,param_6,param_5);
  Random(DAT_000c7c34,1000);
  uVar4 = __floatsisf();
  pCVar1 = (CCAction *)
           cocos2d::CCRotateTo::actionWithDuration((float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCNode::runAction((CCNode *)param_2,pCVar1);
  this = (CParticle *)operator_new(0x38);
  CParticle::CParticle(this);
  uVar4 = __floatsisf(param_5);
  CParticle::setPos(this,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2);
  __floatsisf(param_7);
  uVar4 = __floatsisf(param_8 * 5);
  fVar3 = (float)CParticle::setVel(this,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),
                                   extraout_s2_00);
  CParticle::setE(this,fVar3);
  iVar2 = (**(code **)(*(int *)param_2 + 0x7c))(param_2);
  fVar3 = (float)__mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
  CParticle::setRadius(this,fVar3);
  fVar3 = (float)__floatsisf(param_9);
  CParticle::setPlanepos(this,fVar3);
  (**(code **)(*(int *)param_2 + 0xac))(param_2,this);
  return;
}


