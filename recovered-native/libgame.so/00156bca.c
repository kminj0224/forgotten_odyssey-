/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156bca  Symbol: deque */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* std::deque<cocos2d::CCSAXState, std::allocator<cocos2d::CCSAXState>
   >::deque(std::deque<cocos2d::CCSAXState, std::allocator<cocos2d::CCSAXState> > const&) */

deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>> * __thiscall
std::deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>>::deque
          (deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>> *this,deque *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 *local_74;
  _Deque_iterator local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 8);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  _Deque_base<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>>::_M_initialize_map
            ((_Deque_base<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>> *)this,
             ((iVar1 - iVar4 >> 2) + -1) * 0x80 + (iVar2 - iVar5 >> 2) + (iVar3 - iVar6 >> 2));
  local_60 = *(undefined4 *)(param_1 + 0x10);
  local_5c = *(undefined4 *)(param_1 + 0x14);
  local_28 = *(undefined4 *)(this + 8);
  local_6c = *(_Deque_iterator *)(param_1 + 0xc);
  uStack_7c = *(undefined4 *)(param_1 + 0x20);
  local_84 = *(undefined4 *)(param_1 + 0x18);
  local_24 = *(undefined4 *)(this + 0xc);
  local_64 = &local_48;
  uStack_80 = *(undefined4 *)(param_1 + 0x1c);
  local_20 = *(undefined4 *)(this + 0x10);
  local_1c = *(undefined4 *)(this + 0x14);
  local_68 = &local_84;
  local_78 = *(undefined4 *)(param_1 + 0x24);
  local_74 = &local_28;
  local_48 = local_84;
  local_44 = uStack_80;
  local_40 = uStack_7c;
  uninitialized_copy<std::_Deque_iterator<cocos2d::CCSAXState,cocos2d::CCSAXState_const&,cocos2d::CCSAXState_const*>,std::_Deque_iterator<cocos2d::CCSAXState,cocos2d::CCSAXState&,cocos2d::CCSAXState*>>
            ((_Deque_iterator)auStack_38,*(_Deque_iterator *)(param_1 + 8),local_6c);
  return this;
}


