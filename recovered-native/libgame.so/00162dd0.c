/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162dd0  Symbol: addImageAsync */

/* cocos2d::CCTextureCache::addImageAsync(char const*, cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

void cocos2d::CCTextureCache::addImageAsync
               (char *param_1,CCObject *param_2,_func_void_CCObject_ptr *param_3)

{
  undefined4 uVar1;
  int iVar2;
  deque<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>> *pdVar3;
  deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> *this;
  _func_void_float *p_Var4;
  int *__s;
  code *in_r3;
  int **ppiVar5;
  void **ppvVar6;
  undefined *puVar7;
  void **ppvVar8;
  float extraout_s0;
  int in_stack_00000000;
  undefined auStack_88 [4];
  char *local_84;
  undefined4 local_80;
  int *local_7c;
  CCObject *local_78;
  undefined4 local_74;
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  void **local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  FUN_001eed40(&local_84,param_2,auStack_88);
  CCFileUtils::ccRemoveHDSuffixFromFile((basic_string *)&local_84);
  uVar1 = CCFileUtils::fullPathFromRelativePath(local_84);
  FUN_001ed9dc(&local_84,uVar1);
  iVar2 = CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
          ::objectForKey(*(basic_string **)(param_1 + 0x14));
  FUN_001ee80c(&local_80,&local_84);
  if (iVar2 == 0) {
    if (param_3 != (_func_void_CCObject_ptr *)0x0) {
      CCObject::retain((CCObject *)param_3);
    }
    if (*(char *)(DAT_00162fc4 + 0x162e46) != '\0') {
      local_70 = (void *)0x0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = (void **)0x0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      std::_Deque_base<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>>::
      _M_initialize_map((_Deque_base<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>>
                         *)&local_70,0);
      pdVar3 = (deque<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>> *)
               operator_new(0x28);
      std::deque<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>>::deque
                (pdVar3,(deque *)&local_70);
      *(deque<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>> **)
       (DAT_00162fc8 + 0x162e8e) = pdVar3;
      if (local_70 != (void *)0x0) {
        ppvVar6 = (void **)(local_4c + 4);
        for (ppvVar8 = local_5c; ppvVar8 < ppvVar6; ppvVar8 = ppvVar8 + 1) {
          operator_delete(*ppvVar8);
        }
        operator_delete(local_70);
      }
      local_48 = (void *)0x0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = (void **)0x0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      std::_Deque_base<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>>::_M_initialize_map
                ((_Deque_base<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> *)&local_48
                 ,0);
      this = (deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> *)operator_new(0x28);
      std::deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>>::deque
                (this,(deque *)&local_48);
      *(deque<cocos2d::_ImageInfo*,std::allocator<cocos2d::_ImageInfo*>> **)
       (DAT_00162fcc + 0x162ed4) = this;
      if (local_48 != (void *)0x0) {
        ppvVar6 = (void **)(local_24 + 4);
        for (ppvVar8 = local_34; ppvVar8 < ppvVar6; ppvVar8 = ppvVar8 + 1) {
          operator_delete(*ppvVar8);
        }
        operator_delete(local_48);
      }
      iVar2 = DAT_00162fd0;
      puVar7 = (undefined *)(DAT_00162fd0 + 0x162ef0);
      pthread_mutex_init((pthread_mutex_t *)(DAT_00162fd0 + 0x162f08),(pthread_mutexattr_t *)0x0);
      sem_init((sem_t *)(iVar2 + 0x162ef4),0,0);
      pthread_mutex_init((pthread_mutex_t *)(iVar2 + 0x162f00),(pthread_mutexattr_t *)0x0);
      pthread_create((pthread_t *)(iVar2 + 0x162f0c),(pthread_attr_t *)0x0,
                     (__start_routine *)(DAT_00162fd4 + 0x162f16),(void *)0x0);
      p_Var4 = (_func_void_float *)CCScheduler::sharedScheduler();
      local_78 = *(CCObject **)(DAT_00162fd8 + 0x162f28);
      local_74 = 0;
      CCScheduler::scheduleSelector(p_Var4,local_78,extraout_s0,false);
      iVar2 = DAT_00162fdc;
      *puVar7 = 0;
      *(undefined *)(iVar2 + 0x162f3e) = 0;
    }
    __s = (int *)operator_new(0x10);
    memset(__s,0,0x10);
    *__s = *(int *)(DAT_00162fe0 + 0x162f56) + 0xc;
    local_7c = __s;
    FUN_001ed9dc(__s,local_80);
    iVar2 = DAT_00162fe4;
    local_7c[1] = (int)param_3;
    local_7c[2] = (int)in_r3;
    local_7c[3] = in_stack_00000000;
    pthread_mutex_lock((pthread_mutex_t *)(iVar2 + 0x162f8a));
    pdVar3 = *(deque<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>> **)
              (iVar2 + 0x162f86);
    ppiVar5 = *(int ***)(pdVar3 + 0x18);
    if (ppiVar5 == (int **)(*(int *)(pdVar3 + 0x20) + -4)) {
      std::deque<cocos2d::_AsyncStruct*,std::allocator<cocos2d::_AsyncStruct*>>::_M_push_back_aux
                (pdVar3,(_AsyncStruct **)&local_7c);
    }
    else {
      if (ppiVar5 != (int **)0x0) {
        *ppiVar5 = local_7c;
      }
      *(int *)(pdVar3 + 0x18) = *(int *)(pdVar3 + 0x18) + 4;
    }
    iVar2 = DAT_00162fe8;
    pthread_mutex_unlock((pthread_mutex_t *)(DAT_00162fe8 + 0x162fba));
    sem_post((sem_t *)(iVar2 + 0x162fa6));
  }
  else if ((param_3 != (_func_void_CCObject_ptr *)0x0) &&
          ((in_r3 != (code *)0x0 || (in_stack_00000000 << 0x1f < 0)))) {
    if (in_stack_00000000 << 0x1f < 0) {
      in_r3 = *(code **)(in_r3 + *(int *)(param_3 + (in_stack_00000000 >> 1)));
    }
    (*in_r3)(param_3 + (in_stack_00000000 >> 1),iVar2);
  }
  FUN_001ed6b8(&local_80);
  FUN_001ed6b8(&local_84);
  return;
}


