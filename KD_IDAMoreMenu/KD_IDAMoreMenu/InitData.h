char szFunDefine[][256] = 
{
	"long sys_restart_syscall(void);",
	"int atexit (void (*function)(void));",
	"pid_t vfork(void);",
	"ssize_t read(int fd,void * buf ,size_t count);",
	"ssize_t write (int fd,const void * buf,size_t count);",
	"int open( const char * pathname, int flags);",
	"int close(int fd);",
	"int creat(const char * pathname, mode_tmode);",
	"int link (const char * oldpath,const char * newpath);",
	"int unlink(const char * pathname);",
	"int execve(const char * filename,char * const argv[ ],char * const envp[ ]);",
	"int chdir(const char * path);",
	"char * asctime(const struct tm * timeptr);",
	"int mknod(const char *pathname, mode_t mode, dev_t dev);",
	"int chmod(const char * path,mode_t mode);",
	"int chown(const char *path, uid_t owner, gid_t group);",
	"off_t lseek(int fildes,off_t offset ,int whence);",
	"pid_t getpid(void);",
	"int mount(const char *source, const char *target,const char *filesystemtype, unsigned long mountflags,const void *data);",
	"int umount(const char *target);",
	"int setuid(uid_t uid);",
	"uid_t getuid(void);",
	"int stime(time_t *t);",
	"long ptrace(enum __ptrace_request request, pid_t pid, void *addr, void *data);",
	"unsigned int alarm(unsigned int seconds);",
	"int pause(void);",
	"int utime(const char * filename,struct utimbuf * buf);",
	"int access(const char * pathname,int mode);",
	"int nice(int inc);",
	"int fsync(int fd);",
	"int kill(pid_t pid,int sig);",
	"int rename(const char * oldpath,const char * newpath);",
	"int mkdir(const char *pathname, mode_t mode);",
	"int rmdir(const char *pathname);",
	"char * strdup( const char *s);",
	"int pipe(int filedes[2]);",
	"int utimes(char * filename.struct timeval *tvp);",
	"char *strpbrk(const char *s,const char *accept);",
	"int setgid(gid_t gid);",
	"gid_t getgid(void);",
	"uid_t geteuid(void);",
	"gid_t getegid(void);",
	"int acct(const char *filename);",
	"int umount2(const char *target, int flags);",
	"int ioctl(int d, int request, ...);",
	"int fcntl(int fd , int cmd);",
	"int setpgid(pid_t pid,pid_t pgid);",
	"mode_t umask(mode_t mask);",
	"int chroot(const char * path);",
	"int ustat(dev_t dev, struct ustat *ubuf);",
	"int dup2(int odlfd,int newfd);",
	"pid_t getppid(void);",
	"pid_t getpgrp(void);",
	"pid_t setsid(void);",
	"int sigaction(int signum,const struct sigaction *act ,struct sigaction *oldact);",
	"int setreuid(uid_t ruid,uid_t euid);",
	"int setregid(gid_t rgid,gid_t egid);",
	"int sigsuspend(const sigset_t *mask);",
	"int sigpending(sigset_t *set);",
	"int sethostname(const char *name, size_t len);",
	"int setrlimit(int resource, const struct rlimit *rlim);",
	"int getrlimit(int resource, struct rlimit *rlim);",
	"int getrusage(int who, struct rusage *usage);",
	"int gettimeofday ( struct timeval * tv , struct timezone * tz );",
	"int settimeofday ( const struct timeval *tv,const struct timezone *tz);",
	"int getgroups(int size,gid_t list[]);",
	"int setgroups(size_t size,const gid_t * list);",
	"int select(int n,fd_set * readfds,fd_set * writefds,fd_set * exceptfds,struct timeval * timeout);",
	"int symlink( const char * oldpath,const char * newpath);",
	"int readlink(const char * path ,char * buf,size_t bufsiz);",
	"int uselib(const char *library);",
	"int swapon(const char *path, int swapflags);",
	"int reboot(int magic, int magic2, int cmd, void *arg);",
	"struct dirent * readdir(DIR * dir);",
	"void *mmap(void *start,size_t length,int prot,int flags,int fd,off_t offsize);",
	"int munmap(void *start,size_t length);",
	"int ftruncate(int fd,off_t length);",
	"int ftruncate(int fd,off_t length);",
	"int fchmod(int fildes,mode_t mode);",
	"int fchown(int fd,uid_t owner,gid_t group);",
	"int getpriority(int which,int who);",
	"int setpriority(int which,int who, int prio);",
	"int statfs(const char *path, struct statfs *buf);",
	"int fstatfs(int fd, struct statfs *buf);",
	"int socketcall(int call, unsigned long *args);",
	"int syslog(int type, char *bufp, int len);",
	"int setitimer(int which, const struct itimerval *new_value,struct itimerval *old_value);",
	"int getitimer(int which, struct itimerval *curr_value);",
	"void exit(int status);",
	"int lstat (const char * file_name.struct stat * buf);",
	"int fstat(int fildes,struct stat *buf);",
	"int vhangup(void);",
	"int syscall(int number, ...);",
	"pid_t wait4(pid_t pid, int *status, int options, struct rusage *rusage);",
	"int swapoff(const char *path);",
	"int sysinfo(struct sysinfo *info);",
	"int ipc(unsigned int call, int first, int second, int third, void *ptr, long fifth);",
	"int fsync(int fd);",
	"int sigreturn(unsigned long __unused);",
	"int clone(int (*fn)(void *), void *child_stack,int flags, void *arg, ... /* pid_t *ptid, struct user_desc *tls, pid_t *ctid */ );",
	"int setdomainname(const char *name, size_t len);",
	"int uname(struct utsname *buf);",
	"int adjtimex(struct timex *buf);",
	"int mprotect(void *addr, size_t len, int prot);",
	"int sigprocmask(int how,const sigset_t *set,sigset_t * oldset);",
	"int init_module(void *module_image, unsigned long len, const char *param_values);",
	"int delete_module(const char *name, int flags);",
	"int quotactl(int cmd, const char *special, int id, caddr_t addr);",
	"pid_t getpgid( pid_t pid);",
	"int fchdir(int fd);",
	"int bdflush(int func, long *address);int bdflush(int func, long data);",
	"int sysfs(int option);  int sysfs(int option, const char *fsname);  int sysfs(int option, unsigned int fs_index, char *buf);",
	"int personality(unsigned long persona);",
	"int setfsuid(uid_t fsuid);",
	"int setfsgid(uid_t fsgid);",
	"int _llseek(unsigned int fd, unsigned long offset_high, unsigned long offset_low, loff_t *result, unsigned int whence);",
	"int getdents(unsigned int fd, struct linux_dirent *dirp,unsigned int count);",
	"int select(int nfds, fd_set *readfds, fd_set *writefds,fd_set *exceptfds, struct timeval *timeout);",
	"int flock(int fd,int operation);",
	"int msync(void *addr, size_t length, int flags);",
	"ssize_t readv(int fd, const struct iovec *iov, int iovcnt);",
	"ssize_t writev(int fd, const struct iovec *iov, int iovcnt);",
	"pid_t getsid(pid_t pid);",
	"int fdatasync(int fd);",
	"int _sysctl(struct __sysctl_args *args);",
	"int mlock(const void *addr, size_t len);",
	"int munlock(const void *addr, size_t len);",
	"int mlockall(int flags);",
	"int munlockall(void);",
	"int sched_setparam(pid_t pid, const struct sched_param *param);",
	"int sched_getparam(pid_t pid, struct sched_param *param);",
	"int sched_setscheduler(pid_t pid, int policy,const struct sched_param *param);",
	"int sched_getscheduler(pid_t pid);",
	"int sched_yield(void);",
	"int sched_get_priority_max(int policy);",
	"int sched_get_priority_mix(int policy);",
	"int sched_rr_get_interval(pid_t pid, struct timespec * tp);",
	"int nanosleep(const struct timespec *req, struct timespec *rem);",
	"void *mremap(void *old_address, size_t old_size,size_t new_size,int flags, ... /* void *new_address */);",
	"int setresuid(uid_t ruid, uid_t euid, uid_t suid);",
	"int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);",
	"int poll(struct pollfd *fds, nfds_t nfds, int timeout);",
	"long nfsservctl(int cmd, struct nfsctl_arg *argp, union nfsctl_res *resp);",
	"int setresgid(gid_t rgid, gid_t egid, gid_t sgid);",
	"int getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);",
	"int prctl(int option, unsigned long arg2, unsigned long arg3,unsigned long arg4, unsigned long arg5);",
	"int sigreturn(unsigned long __unused);",
	"int sigaction(int signum, const struct sigaction *act,struct sigaction *oldact);",
	"int sigprocmask(int how, const sigset_t *set, sigset_t *oldset);",
	"int sigpending(sigset_t *set);",
	"int sigtimedwait(const sigset_t *set, siginfo_t *info, const struct timespec *timeout);",
	"int rt_sigqueueinfo(pid_t tgid, int sig, siginfo_t *uinfo);",
	"int sigsuspend(const sigset_t *mask);",
	"ssize_t pread(int fd, void *buf, size_t count, off_t offset);",
	"ssize_t pwrite(int fd, const void *buf, size_t count, off_t offset);",
	"int chown(const char * path, uid_t owner,gid_t group);",
	"char * getcwd(char * buf,size_t size);",
	"int capget(cap_user_header_t hdrp, cap_user_data_t datap);",
	"int capset(cap_user_header_t hdrp, const cap_user_data_t datap);",
	"int sigaltstack(const stack_t *ss, stack_t *oss);",
	"ssize_t sendfile(int out_fd, int in_fd, off_t *offset, size_t count);",
	"pid_t vfork(void);",
	"SuS compliant getrlimit, MAN Has not yet been archived.",
	"void *mmap2(void *addr, size_t length, int prot,int flags,int fd, off_t pgoffset);",
	"int truncate(const char *path, off_t length);",
	"int ftruncate(int fd, off_t length);",
	"int stat(const char *path, struct stat *buf);",
	"int lstat(const char *path, struct stat *buf);",
	"int fstat(int fd, struct stat *buf);",
	"int lchown(const char *path, uid_t owner, gid_t group);",
	"uid_t getuid(void);",
	"gid_t getgid(void);",
	"uid_t geteuid(void);",
	"gid_t getegid(void);",
	"int setreuid(uid_t ruid,uid_t euid);",
	"int setregid(gid_t rgid,gid_t egid);",
	"int getgroups(int size,gid_t list[]);",
	"int setgroups(size_t size,const gid_t * list);",
	"int fchown(int fd,uid_t owner,gid_t group);",
	"int setresuid(uid_t ruid, uid_t euid, uid_t suid);",
	"int getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);",
	"int setresgid(gid_t rgid, gid_t egid, gid_t sgid);",
	"int getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);",
	"int chown(const char * path, uid_t owner,gid_t group);",
	"int setuid(uid_t uid);",
	"int setgid(gid_t gid);",
	"int setfsuid(uid_t fsuid);",
	"int setfsgid(uid_t fsgid);",
	"int getdents(unsigned int fd, struct linux_dirent *dirp,unsigned int count);",
	"int pivot_root(const char *new_root, const char *put_old);",
	"int mincore(void*  start, size_t  length, unsigned char*  vec);",
	"int madvise(const void *, size_t, int);",
	"int fcntl(int  fd, int  command, ...);",
	"pid_t gettid(void);",
	"ssize_t readahead(int fd, off64_t offset, size_t count);",
	"int setxattr(const char *path, const char *name,const void *value, size_t size, int flags);",
	"int lsetxattr(const char *path, const char *name,const void *value, size_t size, int flags);",
	"int fsetxattr(int fd, const char *name,const void *value, size_t size, int flags);",
	"ssize_t getxattr(const char *path, const char *name, void *value, size_t size);",
	"ssize_t lgetxattr(const char *path, const char *name, void *value, size_t size);",
	"ssize_t fgetxattr(int fd, const char *name,void *value, size_t size);",
	"ssize_t listxattr(const char *path, char *list, size_t size);",
	"ssize_t llistxattr(const char *path, char *list, size_t size);",
	"ssize_t flistxattr(int fd, char *list, size_t size);",
	"int removexattr(const char *path, const char *name);",
	"int lremovexattr(const char *path, const char *name);",
	"int fremovexattr(int fd, const char *name);",
	"int tkill(int tid, int sig);",
	"ssize_t sendfile(int out_fd, int in_fd, off_t *offset, size_t count);",
	"int futex(int *uaddr, int op, int val, const struct timespec *timeout,int *uaddr2, int val3);",
	"int sched_setaffinity(pid_t pid, size_t cpusetsize,cpu_set_t *mask);",
	"int sched_getaffinity(pid_t pid, size_t cpusetsize,cpu_set_t *mask);",
	"int io_setup(unsigned nr_events, aio_context_t *ctx_idp);",
	"int io_destroy(aio_context_t ctx_id);",
	"int io_getevents(aio_context_t ctx_id, long min_nr, long nr, struct io_event *events, struct timespec *timeout);",
	"int int io_submit(aio_context_t ctx_id, long nr, struct iocb **iocbpp);",
	"int io_cancel(aio_context_t ctx_id, struct iocb *iocb,struct io_event *result);",
	"void exit_group(int status);",
	"int lookup_dcookie(u64 cookie, char *buffer, size_t len);",
	"int epoll_create(int size);int epoll_create1(int flags);",
	"int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);",
	"int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);",
	"int remap_file_pages(void *addr, size_t size, int prot,ssize_t pgoff, int flags);",
	"long set_tid_address(int *tidptr);",
	"int timer_create(clockid_t clockid, struct sigevent *evp,timer_t *timerid);",
	"int timer_settime(timer_t timerid, int flags,const struct itimerspec *new_value,struct itimerspec * old_value);",
	"int timer_gettime(timer_t timerid, struct itimerspec *curr_value);",
	"int timer_getoverrun(timer_t timerid);",
	"int timer_delete(timer_t timerid);",
	"int clock_settime(clockid_t clk_id, const struct timespec *tp);",
	"int clock_gettime(clockid_t clk_id, struct timespec *tp);",
	"int clock_getres(clockid_t clk_id, struct timespec *res);",
	"int clock_nanosleep(clockid_t clock_id, int flags,const struct timespec *request,struct timespec *remain);",
	"int statfs(const char *path, struct statfs *buf);",
	"int fstatfs(int fd, struct statfs *buf);",
	"int tgkill(int tgid, int tid, int sig);",
	"int utimes(char * filename.struct timeval *tvp);",
	"int posix_fadvise(int fd, off_t offset, off_t len, int advice);",
	"int pciconfig_iobase(long which, unsigned long bus,unsigned long devfn);",
	"int pciconfig_read(unsigned long bus, unsigned long dfn,unsigned long off, unsigned long len, void *buf);",
	"int pciconfig_write(unsigned long bus, unsigned long dfn,unsigned long off, unsigned long len, void *buf);",
	"mqd_t mq_open(const char *name, int oflag);",
	"mqd_t mq_unlink(const char *name);",
	"mqd_t mq_timedsend(mqd_t mqdes, const char *msg_ptr,size_t msg_len, unsigned msg_prio,const struct timespec *abs_timeout);",
	"ssize_t mq_timedreceive(mqd_t mqdes, char *msg_ptr,size_t msg_len, unsigned *msg_prio,const struct timespec *abs_timeout);",
	"mqd_t mq_notify(mqd_t mqdes, const struct sigevent *notification);",
	"mqd_t mq_getsetattr(mqd_t mqdes, struct mq_attr *newattr,struct mq_attr *oldattr);",
	"pid_t wait(int *status);",
	"int socket(int domain,int type,int protocol);",
	"int bind(int sockfd,struct sockaddr * my_addr,int addrlen);",
	"int connect (int sockfd,struct sockaddr * serv_addr,int addrlen);",
	"int listen(int s,int backlog);",
	"char *strpbrk(const char *s,const char *accept);",
	"int getsockname(int sockfd, struct sockaddr *addr, socklen_t *addrlen);",
	"int getpeername(int sockfd, struct sockaddr *addr, socklen_t *addrlen);",
	"int socketpair(int domain, int type, int protocol, int sv[2]);",
	"int send(int s,const void * msg,int len,unsigned int falgs);",
	"ssize_t sendto(int sockfd, const void *buf, size_t len, int flags,const struct sockaddr *dest_addr, socklen_t addrlen);",
	"int recv(int s,void *buf,int len,unsigned int flags);",
	"int recvfrom(int s,void *buf,int len,unsigned int flags ,struct sockaddr *from ,int *fromlen);",
	"int shutdown(int s,int how);",
	"int setsockopt(int s,int level,int optname,const void * optval,,socklen_toptlen);",
	"int getsockopt(int s,int level,int optname,void* optval,socklen_t* optlen);",
	"int sendmsg(int s,const strcut msghdr *msg,unsigned int flags);",
	"int recvmsg(int s,struct msghdr *msg,unsigned int flags);",
	"int semop(int semid, struct sembuf *sops, unsigned nsops);",
	"int semget(key_t key, int nsems, int semflg);",
	"int semctl(int semid, int semnum, int cmd, ...);",
	"int msgsnd(int msqid, const void *msgp, size_t msgsz, int msgflg);",
	"ssize_t msgrcv(int msqid, void *msgp, size_t msgsz, long msgtyp,int msgflg);",
	"int msgget(key_t key, int msgflg);",
	"int msgctl(int msqid, int cmd, struct msqid_ds *buf);",
	"void *shmat(int shmid, const void *shmaddr, int shmflg);",
	"int shmdt(const void *shmaddr);",
	"int shmget(key_t key, size_t size, int shmflg);",
	"int shmctl(int shmid, int cmd, struct shmid_ds *buf);",
	"key_serial_t add_key(const char *type, const char *description,const void *payload, size_t plen, key_serial_t keyring);",
	"key_serial_t request_key(const char *type, const char *description,const char *callout_info, key_serial_t keyring);",
	"long keyctl(int cmd, ...);",
	"int semtimedop(int semid, struct sembuf *sops, unsigned nsops, struct timespec *timeout);",
	"Unimplemented system calls.",
	"int ioprio_get(int which, int who);int ioprio_set(int which, int who, int ioprio);",
	"int ioprio_get(int which, int who);int ioprio_set(int which, int who, int ioprio);",
	"int inotify_init(void);",
	"int inotify_add_watch(int fd, const char *pathname, uint32_t mask);",
	"int inotify_rm_watch(int fd, uint32_t wd);",
	"int mbind(void *addr, unsigned long len, int mode,unsigned long *nodemask, unsigned long maxnode, unsigned flags);",
	"int get_mempolicy(int *mode, unsigned long *nodemask, unsigned long maxnode, unsigned long addr, unsigned long flags);",
	"int set_mempolicy(int mode, unsigned long *nodemask,  unsigned long maxnode);",
	"int openat(int dirfd, const char *pathname, int flags);",
	"int mkdirat(int dirfd, const char *pathname, mode_t mode);",
	"int mknodat(int dirfd, const char *pathname, mode_t mode, dev_t dev);",
	"int fchownat(int dirfd, const char *pathname, uid_t owner, gid_t group, int flags);",
	"int futimesat(int dirfd, const char *pathname, const struct timeval times[2]);",
	"int fstatat(int dirfd, const char *pathname, struct stat *buf, int flags);",
	"int unlinkat(int dirfd, const char *pathname, int flags);",
	"int renameat(int olddirfd, const char *oldpath,int newdirfd, const char *newpath);",
	"int linkat(int olddirfd, const char *oldpath, int newdirfd, const char *newpath, int flags);",
	"int symlinkat(const char *oldpath, int newdirfd, const char *newpath);",
	"int readlinkat(int dirfd, const char *pathname, char *buf, size_t bufsiz);",
	"int fchmodat(int dirfd, const char *pathname, mode_t mode, int flags);",
	"int faccessat(int dirfd, const char *pathname, int mode, int flags);",
	"int pselect(int nfds, fd_set *readfds, fd_set *writefds,fd_set *exceptfds, const struct timespec *timeout, const sigset_t *sigmask);",
	"int poll(struct pollfd *fds, nfds_t nfds, int timeout);",
	"int unshare(int flags);",
	"long set_robust_list(struct robust_list_head *head, size_t len);",
	"long get_robust_list(int pid, struct robust_list_head **head_ptr, size_t *len_ptr);",
	"ssize_t splice(int fd_in, loff_t *off_in, int fd_out, loff_t *off_out, size_t len, unsigned int flags);",
	"int sync_file_range(int fd, off64_t offset, off64_t nbytes, unsigned int flags);",
	"int sync_file_range(int fd, off64_t offset, off64_t nbytes, unsigned int flags);",
	"ssize_t tee(int fd_in, int fd_out, size_t len, unsigned int flags);",
	"ssize_t vmsplice(int fd, const struct iovec *iov, unsigned long nr_segs, unsigned int flags);",
	"long move_pages(int pid, unsigned long count, void **pages, const int *nodes, int *status, int flags);",
	"int getcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *tcache);",
	"int epoll_pwait(int epfd, struct epoll_event *events,int maxevents, int timeout,const sigset_t *sigmask);",
	"long kexec_load(unsigned long entry, unsigned long nr_segments,struct kexec_segment *segments, unsigned long flags);",
	"int utimensat(int dirfd, const char *pathname, const struct timespec times[2], int flags);",
	"int signalfd(int fd, const sigset_t *mask, int flags);",
	"int timerfd_create(int clockid, int flags);",
	"int eventfd(unsigned int initval, int flags);",
	"int fallocate(int fd, int mode, off_t offset, off_t len);",
	"int timerfd_settime(int fd, int flags,const struct itimerspec *new_value,struct itimerspec *old_value);",
	"int timerfd_gettime(int fd, struct itimerspec *curr_value);",
	"int signalfd(int fd, const sigset_t *mask, int flags);",
	"int eventfd(unsigned int initval, int flags);",
	"int epoll_create1(int flags);",
	"int dup3(int oldfd, int newfd, int flags);",
	"int pipe2(int pipefd[2], int flags);",
	"int inotify_init1(int flags);",
	"ssize_t preadv(int fd, const struct iovec *iov, int iovcnt, off_t offset);",
	"ssize_t pwritev(int fd, const struct iovec *iov, int iovcnt, off_t offset);",
	"int rt_tgsigqueueinfo(pid_t tgid, pid_t tid, int sig, siginfo_t *uinfo);",
	"int perf_event_open(struct perf_event_attr *attr,pid_t pid, int cpu, int group_fd, unsigned long flags);",
	"int recvmmsg(int sockfd, struct mmsghdr *msgvec, unsigned int vlen, unsigned int flags, struct timespec *timeout);",
	"int accept4(int sockfd, struct sockaddr *addr,socklen_t *addrlen, int flags);",
	"int fanotify_init(unsigned int flags, unsigned int event_f_flags);",
	"int fanotify_mark(int fanotify_fd, unsigned int flags,uint64_t mask, int dirfd, const char *pathname);",
	"int prlimit(pid_t pid, int resource, const struct rlimit *new_limit, struct rlimit *old_limit);",
	"int name_to_handle_at(int dirfd, const char *pathname,struct file_handle *handle, int *mount_id, int flags);",
	"int open_by_handle_at(int mount_fd, struct file_handle *handle, int flags);",
	"int clock_adjtime(clockid_t id, struct timex *tx);",
	"int syncfs(int fd);",
	"int sendmmsg(int sockfd, struct mmsghdr *msgvec, unsigned int vlen, unsigned int flags);",
	"int setns(int fd, int nstype);",
	"ssize_t process_vm_readv(pid_t pid,const struct iovec *local_iov,unsigned long liovcnt, const struct iovec *remote_iov,unsigned long riovcnt, unsigned long flags);",
	"ssize_t process_vm_writev(pid_t pid,const struct iovec *local_iov, unsigned long liovcnt,const struct iovec *remote_iov, unsigned long riovcnt, unsigned long flags);",
	"__ARM_NR_breakpoint",
	"int cacheflush(char *addr, int nbytes, int cache);",
	"__ARM_NR_usr26",
	"__ARM_NR_usr32",
	"__ARM_NR_set_tls",

};

char szInitDeclare[][100] = 
{
	"__NR_restart_syscall",
	"__NR_exit",
	"__NR_fork",
	"__NR_read",
	"__NR_write",
	"__NR_open",
	"__NR_close",
	"__NR_creat",
	"__NR_link",
	"__NR_unlink",
	"__NR_execve",
	"__NR_chdir",
	"__NR_time",
	"__NR_mknod",
	"__NR_chmod",
	"__NR_lchown",
	"__NR_lseek",
	"__NR_getpid",
	"__NR_mount",
	"__NR_umount",
	"__NR_setuid",
	"__NR_getuid",
	"__NR_stime",
	"__NR_ptrace",
	"__NR_alarm",
	"__NR_pause",
	"__NR_utime",
	"__NR_access",
	"__NR_nice",
	"__NR_sync",
	"__NR_kill",
	"__NR_rename",
	"__NR_mkdir",
	"__NR_rmdir",
	"__NR_dup",
	"__NR_pipe",
	"__NR_times",
	"__NR_brk",
	"__NR_setgid",
	"__NR_getgid",
	"__NR_geteuid",
	"__NR_getegid",
	"__NR_acct",
	"__NR_umount2",
	"__NR_ioctl",
	"__NR_fcntl",
	"__NR_setpgid",
	"__NR_umask",
	"__NR_chroot",
	"__NR_ustat",
	"__NR_dup2",
	"__NR_getppid",
	"__NR_getpgrp",
	"__NR_setsid",
	"__NR_sigaction",
	"__NR_setreuid",
	"__NR_setregid",
	"__NR_sigsuspend",
	"__NR_sigpending",
	"__NR_sethostname",
	"__NR_setrlimit",
	"__NR_getrlimit",
	"__NR_getrusage",
	"__NR_gettimeofday",
	"__NR_settimeofday",
	"__NR_getgroups",
	"__NR_setgroups",
	"__NR_select",
	"__NR_symlink",
	"__NR_readlink",
	"__NR_uselib",
	"__NR_swapon",
	"__NR_reboot",
	"__NR_readdir",
	"__NR_mmap",
	"__NR_munmap",
	"__NR_truncate",
	"__NR_ftruncate",
	"__NR_fchmod",
	"__NR_fchown",
	"__NR_getpriority",
	"__NR_setpriority",
	"__NR_statfs",
	"__NR_fstatfs",
	"__NR_socketcall",
	"__NR_syslog",
	"__NR_setitimer",
	"__NR_getitimer",
	"__NR_stat",
	"__NR_lstat",
	"__NR_fstat",
	"__NR_vhangup",
	"__NR_syscall",
	"__NR_wait4",
	"__NR_swapoff",
	"__NR_sysinfo",
	"__NR_ipc",
	"__NR_fsync",
	"__NR_sigreturn",
	"__NR_clone",
	"__NR_setdomainname",
	"__NR_uname",
	"__NR_adjtimex",
	"__NR_mprotect",
	"__NR_sigprocmask",
	"__NR_init_module",
	"__NR_delete_module",
	"__NR_quotactl",
	"__NR_getpgid",
	"__NR_fchdir",
	"__NR_bdflush",
	"__NR_sysfs",
	"__NR_personality",
	"__NR_setfsuid",
	"__NR_setfsgid",
	"__NR__llseek",
	"__NR_getdents",
	"__NR__newselect",
	"__NR_flock",
	"__NR_msync",
	"__NR_readv",
	"__NR_writev",
	"__NR_getsid",
	"__NR_fdatasync",
	"__NR__sysctl",
	"__NR_mlock",
	"__NR_munlock",
	"__NR_mlockall",
	"__NR_munlockall",
	"__NR_sched_setparam",
	"__NR_sched_getparam",
	"__NR_sched_setscheduler",
	"__NR_sched_getscheduler",
	"__NR_sched_yield",
	"__NR_sched_get_priority_max",
	"__NR_sched_get_priority_min",
	"__NR_sched_rr_get_interval",
	"__NR_nanosleep",
	"__NR_mremap",
	"__NR_setresuid",
	"__NR_getresuid",
	"__NR_poll",
	"__NR_nfsservctl",
	"__NR_setresgid",
	"__NR_getresgid",
	"__NR_prctl",
	"__NR_rt_sigreturn",
	"__NR_rt_sigaction",
	"__NR_rt_sigprocmask",
	"__NR_rt_sigpending",
	"__NR_rt_sigtimedwait",
	"__NR_rt_sigqueueinfo",
	"__NR_rt_sigsuspend",
	"__NR_pread64",
	"__NR_pwrite64",
	"__NR_chown",
	"__NR_getcwd",
	"__NR_capget",
	"__NR_capset",
	"__NR_sigaltstack",
	"__NR_sendfile",
	"__NR_vfork",
	"__NR_ugetrlimit",
	"__NR_mmap2",
	"__NR_truncate64",
	"__NR_ftruncate64",
	"__NR_stat64",
	"__NR_lstat64",
	"__NR_fstat64",
	"__NR_lchown32",
	"__NR_getuid32",
	"__NR_getgid32",
	"__NR_geteuid32",
	"__NR_getegid32",
	"__NR_setreuid32",
	"__NR_setregid32",
	"__NR_getgroups32",
	"__NR_setgroups32",
	"__NR_fchown32",
	"__NR_setresuid32",
	"__NR_getresuid32",
	"__NR_setresgid32",
	"__NR_getresgid32",
	"__NR_chown32",
	"__NR_setuid32",
	"__NR_setgid32",
	"__NR_setfsuid32",
	"__NR_setfsgid32",
	"__NR_getdents64",
	"__NR_pivot_root",
	"__NR_mincore",
	"__NR_madvise",
	"__NR_fcntl64",
	"__NR_gettid",
	"__NR_readahead",
	"__NR_setxattr",
	"__NR_lsetxattr",
	"__NR_fsetxattr",
	"__NR_getxattr",
	"__NR_lgetxattr",
	"__NR_fgetxattr",
	"__NR_listxattr",
	"__NR_llistxattr",
	"__NR_flistxattr",
	"__NR_removexattr",
	"__NR_lremovexattr",
	"__NR_fremovexattr",
	"__NR_tkill",
	"__NR_sendfile64",
	"__NR_futex",
	"__NR_sched_setaffinity",
	"__NR_sched_getaffinity",
	"__NR_io_setup",
	"__NR_io_destroy",
	"__NR_io_getevents",
	"__NR_io_submit",
	"__NR_io_cancel",
	"__NR_exit_group",
	"__NR_lookup_dcookie",
	"__NR_epoll_create",
	"__NR_epoll_ctl",
	"__NR_epoll_wait",
	"__NR_remap_file_pages",
	"__NR_set_tid_address",
	"__NR_timer_create",
	"__NR_timer_settime",
	"__NR_timer_gettime",
	"__NR_timer_getoverrun",
	"__NR_timer_delete",
	"__NR_clock_settime",
	"__NR_clock_gettime",
	"__NR_clock_getres",
	"__NR_clock_nanosleep",
	"__NR_statfs64",
	"__NR_fstatfs64",
	"__NR_tgkill",
	"__NR_utimes",
	"__NR_arm_fadvise64_64",
	"__NR_pciconfig_iobase",
	"__NR_pciconfig_read",
	"__NR_pciconfig_write",
	"__NR_mq_open",
	"__NR_mq_unlink",
	"__NR_mq_timedsend",
	"__NR_mq_timedreceive",
	"__NR_mq_notify",
	"__NR_mq_getsetattr",
	"__NR_waitid",
	"__NR_socket",
	"__NR_bind",
	"__NR_connect",
	"__NR_listen",
	"__NR_accept",
	"__NR_getsockname",
	"__NR_getpeername",
	"__NR_socketpair",
	"__NR_send",
	"__NR_sendto",
	"__NR_recv",
	"__NR_recvfrom",
	"__NR_shutdown",
	"__NR_setsockopt",
	"__NR_getsockopt",
	"__NR_sendmsg",
	"__NR_recvmsg",
	"__NR_semop",
	"__NR_semget",
	"__NR_semctl",
	"__NR_msgsnd",
	"__NR_msgrcv",
	"__NR_msgget",
	"__NR_msgctl",
	"__NR_shmat",
	"__NR_shmdt",
	"__NR_shmget",
	"__NR_shmctl",
	"__NR_add_key",
	"__NR_request_key",
	"__NR_keyctl",
	"__NR_semtimedop",
	"__NR_vserver",
	"__NR_ioprio_set",
	"__NR_ioprio_get",
	"__NR_inotify_init",
	"__NR_inotify_add_watch",
	"__NR_inotify_rm_watch",
	"__NR_mbind",
	"__NR_get_mempolicy",
	"__NR_set_mempolicy",
	"__NR_openat",
	"__NR_mkdirat",
	"__NR_mknodat",
	"__NR_fchownat",
	"__NR_futimesat",
	"__NR_fstatat64",
	"__NR_unlinkat",
	"__NR_renameat",
	"__NR_linkat",
	"__NR_symlinkat",
	"__NR_readlinkat",
	"__NR_fchmodat",
	"__NR_faccessat",
	"__NR_pselect6",
	"__NR_ppoll",
	"__NR_unshare",
	"__NR_set_robust_list",
	"__NR_get_robust_list",
	"__NR_splice",
	"__NR_arm_sync_file_range",
	"__NR_sync_file_range2",
	"__NR_tee",
	"__NR_vmsplice",
	"__NR_move_pages",
	"__NR_getcpu",
	"__NR_epoll_pwait",
	"__NR_kexec_load",
	"__NR_utimensat",
	"__NR_signalfd",
	"__NR_timerfd_create",
	"__NR_eventfd",
	"__NR_fallocate",
	"__NR_timerfd_settime",
	"__NR_timerfd_gettime",
	"__NR_signalfd4",
	"__NR_eventfd2",
	"__NR_epoll_create1",
	"__NR_dup3",
	"__NR_pipe2",
	"__NR_inotify_init1",
	"__NR_preadv",
	"__NR_pwritev",
	"__NR_rt_tgsigqueueinfo",
	"__NR_perf_event_open",
	"__NR_recvmmsg",
	"__NR_accept4",
	"__NR_fanotify_init",
	"__NR_fanotify_mark",
	"__NR_prlimit64",
	"__NR_name_to_handle_at",
	"__NR_open_by_handle_at",
	"__NR_clock_adjtime",
	"__NR_syncfs",
	"__NR_sendmmsg",
	"__NR_setns",
	"__NR_process_vm_readv",
	"__NR_process_vm_writev",
	"__ARM_NR_breakpoint",
	"__ARM_NR_cacheflush",
	"__ARM_NR_usr26",
	"__ARM_NR_usr32",
	"__ARM_NR_set_tls",
};

char szInitIndex[][20] = 
{
	"0", "1", "2", "3", "4", "5", "6", "8", "9", "10", "11", "12", "13", "14", "15", "16", "19", "20", "21", "22", "23", "24", "25", "26", "27", "29", "30", "33", "34", "36", "37", "38", "39", "40", "41", "42", "43", "45", "46", "47",
		"49", "50", "51", "52", "54", "55", "57", "60", "61", "62", "63", "64", "65", "66", "67", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94",
		"95", "96", "97", "99", "100", "102", "103", "104", "105", "106", "107", "108", "111", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "124", "125", "126", "128", "129", "131", "132", "133", "134", "135",
		"136", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "168", "169", "170", "171",
		"172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206",
		"207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240",
		"241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", 
		"275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", 
		"308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", 
		"341", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", 
		"373", "374", "375", "376", "377", "983041","983042", "983043", "983044", "983045",
};