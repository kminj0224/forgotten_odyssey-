/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014473a  Symbol: equal_range */

/* std::_Rb_tree<cocos2d::CCObject*, cocos2d::CCObject*, std::_Identity<cocos2d::CCObject*>,
   std::less<cocos2d::CCObject*>, std::allocator<cocos2d::CCObject*>
   >::equal_range(cocos2d::CCObject* const&) */

void std::
     _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
     ::equal_range(CCObject **param_1)

{
  int in_r1;
  CCObject *pCVar1;
  uint *in_r2;
  CCObject *pCVar2;
  CCObject *pCVar3;
  CCObject *pCVar4;
  uint uVar5;
  CCObject *pCVar6;
  
  pCVar1 = (CCObject *)(in_r1 + 4);
  pCVar3 = *(CCObject **)(in_r1 + 8);
LAB_00144790:
  do {
    if (pCVar3 == (CCObject *)0x0) {
      *param_1 = pCVar1;
LAB_00144796:
      param_1[1] = pCVar1;
      return;
    }
    uVar5 = *in_r2;
    if (uVar5 <= *(uint *)(pCVar3 + 0x10)) {
      if (*(uint *)(pCVar3 + 0x10) <= uVar5) {
        pCVar2 = pCVar3;
        pCVar6 = *(CCObject **)(pCVar3 + 8);
        while (pCVar4 = *(CCObject **)(pCVar3 + 0xc), pCVar6 != (CCObject *)0x0) {
          if (*(uint *)(pCVar6 + 0x10) < uVar5) {
            pCVar6 = *(CCObject **)(pCVar6 + 0xc);
          }
          else {
            pCVar2 = pCVar6;
            pCVar6 = *(CCObject **)(pCVar6 + 8);
          }
        }
        while (pCVar4 != (CCObject *)0x0) {
          if (uVar5 < *(uint *)(pCVar4 + 0x10)) {
            pCVar1 = pCVar4;
            pCVar4 = *(CCObject **)(pCVar4 + 8);
          }
          else {
            pCVar4 = *(CCObject **)(pCVar4 + 0xc);
          }
        }
        *param_1 = pCVar2;
        goto LAB_00144796;
      }
      pCVar1 = pCVar3;
      pCVar3 = *(CCObject **)(pCVar3 + 8);
      goto LAB_00144790;
    }
    pCVar3 = *(CCObject **)(pCVar3 + 0xc);
  } while( true );
}


