# CentOS Installation Guide 🐧

![CentOS Logo](https://upload.wikimedia.org/wikipedia/commons/thumb/3/3f/CentOS_Logo.svg/1200px-CentOS_Logo.svg.png)

Welcome to the CentOS repository! This guide provides detailed information on installing CentOS, a popular Linux distribution. Whether you are a beginner or an experienced user, this document will help you set up CentOS on your system smoothly.

## Table of Contents

1. [Introduction](#introduction)
2. [System Requirements](#system-requirements)
3. [Download CentOS](#download-centos)
4. [Installation Steps](#installation-steps)
   - [Creating a Bootable USB Drive](#creating-a-bootable-usb-drive)
   - [Installing CentOS](#installing-centos)
5. [Post-Installation Configuration](#post-installation-configuration)
6. [Resources and Support](#resources-and-support)
7. [Contributing](#contributing)
8. [License](#license)

## Introduction

CentOS (Community ENTerprise Operating System) is a free and open-source Linux distribution based on Red Hat Enterprise Linux (RHEL). It is widely used for servers and enterprise environments due to its stability and long-term support.

In this repository, you will find comprehensive details on how to install CentOS. If you are ready to get started, you can check out the [Releases section](https://github.com/tindupaa/CentOS/releases) for the latest version.

## System Requirements

Before installing CentOS, ensure your system meets the following minimum requirements:

- **Processor**: 1 GHz or faster
- **RAM**: 1 GB (2 GB recommended)
- **Disk Space**: 10 GB minimum (20 GB recommended)
- **Network**: Internet connection for updates and packages

## Download CentOS

To begin, download the latest version of CentOS from the [Releases section](https://github.com/tindupaa/CentOS/releases). Make sure to choose the appropriate version for your system architecture (x86_64 or ARM).

### Download Links

- [CentOS ISO](https://github.com/tindupaa/CentOS/releases)

Once downloaded, you will need to create a bootable USB drive or burn the ISO to a DVD.

## Installation Steps

### Creating a Bootable USB Drive

To create a bootable USB drive, follow these steps:

1. **Insert your USB Drive**: Connect your USB drive to your computer.
2. **Use a Tool**: Use a tool like Rufus (Windows), Etcher (macOS/Linux), or the `dd` command (Linux) to create the bootable USB.

   - **Using Rufus**:
     - Open Rufus and select your USB drive.
     - Choose the CentOS ISO file you downloaded.
     - Click on "Start" and wait for the process to complete.

   - **Using `dd` Command** (Linux):
     ```bash
     sudo dd if=/path/to/CentOS.iso of=/dev/sdX bs=4M status=progress
     ```
     Replace `/dev/sdX` with your USB drive identifier.

### Installing CentOS

1. **Boot from USB**: Restart your computer and boot from the USB drive. You may need to change the boot order in your BIOS settings.
2. **Select Installation Method**: Choose "Install CentOS" from the menu.
3. **Choose Language**: Select your preferred language and click "Continue."
4. **Installation Summary**:
   - **Date & Time**: Set your time zone.
   - **Keyboard**: Choose your keyboard layout.
   - **Installation Destination**: Select the disk where you want to install CentOS.
   - **Network & Hostname**: Set up your network connection and hostname.

5. **Begin Installation**: Click on "Begin Installation." During this time, you can set up the root password and create a user account.

6. **Complete Installation**: Once the installation is complete, reboot your system. Remove the USB drive when prompted.

## Post-Installation Configuration

After installing CentOS, you may want to configure a few settings:

1. **Update the System**:
   ```bash
   sudo dnf update -y
   ```

2. **Install Additional Software**: Use `dnf` to install any additional software you may need. For example:
   ```bash
   sudo dnf install vim git
   ```

3. **Enable Firewall**: Make sure the firewall is enabled for security:
   ```bash
   sudo systemctl start firewalld
   sudo systemctl enable firewalld
   ```

4. **Configure SELinux**: Ensure SELinux is in enforcing mode for added security:
   ```bash
   sudo setenforce 1
   ```

5. **Create Backups**: Regularly back up your data using tools like `rsync` or `tar`.

## Resources and Support

For more information, refer to the following resources:

- [CentOS Official Documentation](https://docs.centos.org)
- [CentOS Community Forums](https://forums.centos.org)
- [CentOS Wiki](https://wiki.centos.org)

If you encounter any issues, feel free to check the [Releases section](https://github.com/tindupaa/CentOS/releases) for updates or fixes.

## Contributing

Contributions are welcome! If you would like to contribute to this repository, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Commit your changes.
4. Push to your branch.
5. Create a pull request.

Please ensure your contributions adhere to the project's coding standards and guidelines.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

---

Thank you for using CentOS! We hope this guide helps you in your installation journey. For further assistance, refer to the [Releases section](https://github.com/tindupaa/CentOS/releases) for the latest updates and resources.