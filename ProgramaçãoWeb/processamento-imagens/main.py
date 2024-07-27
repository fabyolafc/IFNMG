from PIL import Image, ImageFilter
import os

# Caminho da imagem
image_path = "C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta.jpg"

# Verificar se a imagem existe
if not os.path.exists(image_path):
    print(f"A imagem {image_path} não foi encontrada.")
else:
    try:
        # Mostrar imagem
        imagem = Image.open(image_path)
        imagem.show()

        # Converter para RGB e salvar
        imagem_rgb = imagem.convert("RGB")
        imagem_rgb.save("C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta_rgb.jpg")

        # Redimensionar para 500x500 e salvar
        tamanho = (500, 500)
        imagem.thumbnail(tamanho)
        imagem.save("C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta_500.jpg")

        # Redimensionar para 300x300 e salvar
        tamanho = (300, 300)
        imagem.thumbnail(tamanho)
        imagem.save("C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta_300.jpg")

        # Rotacionar e salvar
        imagem.rotate(180).save("C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta_rotate.jpg")

        # Converter para preto e branco e salvar
        imagem.convert("L").save("C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta_bw.jpg")

        # Aplicar filtro de desfoque Gaussiano e salvar
        imagem.filter(ImageFilter.GaussianBlur(20)).save("C:/Users/User/OneDrive/Portfolio/Práticas/IFNMG/ProgramaçãoWeb/processamento-imagens/sustenta_blur.jpg")
        
    except Exception as e:
        print(f"Ocorreu um erro: {e}")
