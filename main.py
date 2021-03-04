from retriever import Retriever

starter = Retriever()
starter.start()

# you can also skip the input part and specifiy the arguments directly
starter = Retriever(cf_handle='nikhilnagrale2', cf_password='password', spoj_handle='user', spoj_password='password', codeforces=True, spoj=False, get_regular=True, get_gym=False, split_gym=False, folders=False, verbose=True)
starter.start()